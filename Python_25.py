def find_prime_numbers() -> None:
    n = int(input("Enter a number: "))
    prime_numbers = []
    for possiblePrime in range(2, n + 1):
        isPrime = True
        for num in range(2, int(math.sqrt(possiblePrime)) + 1):
            if possiblePrime % num == 0:
                isPrime = False
                break
        if isPrime:
            prime_numbers.append(possiblePrime)
    print(prime_numbers)