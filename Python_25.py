import sys

def factorize(n):
    factors = []
    for i in range(1, n+1):
        if n % i == 0:
            factors.append(i)
    return factors

def main():
    try:
        user_input = int(input().strip())
        if user_input <= 0:
            raise ValueError
        result = factorize(user_input)
        output = ' '.join(str(f) for f in result)
        print(output)
    except ValueError:
        print("Invalid input")

main()