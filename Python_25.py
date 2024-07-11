def find_prime_numbers(n):
    prime_numbers = []
    for possiblePrime in range(2, n + 1):
        isPrime = True
        for num in range(2, int(possiblePrime ** 0.5) + 1):
            if possiblePrime % num == 0:
                isPrime = False
                break
        if isPrime:
            prime_numbers.append(possiblePrime)
    return prime_numbers

while True:
    try:
        n = int(input("Enter an integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")
        continue

print(find_prime_numbers(n))