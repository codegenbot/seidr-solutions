```
def find_prime_numbers(n):
    result = [2]  
    for possiblePrime in range(3, n + 1):
        isPrime = True
        for num in range(3, int(possiblePrime ** 0.5) + 1):
            if possiblePrime % num == 0:
                isPrime = False
                break
        if isPrime:
            result.append(possiblePrime)
    return result

while True:
    try:
        n = int(input("Enter an integer: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")
        continue

print(find_prime_numbers(n))