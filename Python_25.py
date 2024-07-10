def factorize(n):
    factors = []
    i = 2
    while i * i <= n:
        if n % i == 0:
            n //= i
            factors.append(i)
        else:
            i += 1
    if n > 1:
        factors.append(n)
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