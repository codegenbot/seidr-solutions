from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors


# Input
while True:
    try:
        n = int(input("Enter a number to factorize: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

# Call the function and print the result
print(factorize(n))