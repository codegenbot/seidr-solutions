def factorize(n):
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return factors


if __name__ == "__main__":
    n = int(input("Enter a positive integer greater than 1: "))

    while n <= 1:
        print("Please enter a positive integer greater than 1.")
        n = int(input("Enter a positive integer greater than 1: "))

    result = factorize(n)
    print(result)