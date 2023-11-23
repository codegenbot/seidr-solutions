import sys
import itertools

def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors


def main():
    user_input = list(map(int, sys.stdin.readline().strip().split()))
    if not user_input:
        print("No input provided")
        return

    try:
        result = [factorize(n) for n in user_input]
        output = ' '.join(str(f) for sublist in itertools.chain.from_iterable(result) for f in sublist)
        print(output.strip())
    except ValueError:
        print("Invalid input")


main()