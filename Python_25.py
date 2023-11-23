import sys

def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    user_input = list(map(int, input().strip().split()))
    if not user_input:
        print("No input provided")
        return

    try:
        result = [factorize(n) for n in user_input]
        output = ' '.join(str(f) for sublist in result for f in sublist)
        print(output.strip())
    except ValueError:
        print("Invalid input")

main()