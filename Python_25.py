def factorize(n):
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            factors.append(i)
            n //= i
    return factors


if __name__ == "__main__":
    try:
        n = int(input("Enter a positive integer greater than 1: "))
        if n <= 1:
            print("Please enter a positive integer greater than 1.")
        else:
            result = factorize(n)
            print(result)
    except ValueError:
        print("Please enter a valid integer.")