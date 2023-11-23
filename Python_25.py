import itertools

def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors


def main():
    user_input = int(input().strip())
    if not user_input:
        print("No input provided")
        return

    try:
        result = factorize(user_input)
        output = ' '.join(str(f) for f in result)
        print(output.strip())
    except ValueError:
        print("Invalid input")


main()