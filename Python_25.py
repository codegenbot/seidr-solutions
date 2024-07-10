def factorize(n):
    factors = []
    divisor = 2
    while divisor <= n:
        if n % divisor == 0:
            factors.append(divisor)
            n = n // divisor
        else:
            divisor += 1
    return factors

if __name__ == "__main__":
    while True:
        try:
            n = int(input("Enter a positive integer greater than 1: "))
            if n <= 1:
                print("Please enter a positive integer greater than 1.")
            else:
                result = factorize(n)
                print(result)
                break
        except ValueError:
            print("Please enter a valid integer.")