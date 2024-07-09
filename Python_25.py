def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

def factorize_input():
    try:
        print("Please enter an integer:")
        n = int(input().strip())
        result = factorize(n)
        print(result)
    except ValueError:
        print("Invalid input. Please enter an integer.")