from typing import List


def factorize(n: int) -> List[int]:
    factors = []
    divisor = 2
    
    if n <= 1:
        return factors
    
    while n > 1:
        if n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        else:
            divisor += 1
    return factors


while True:
    try:
        n = int(input("Enter a number to factorize: ").strip())
        if n > 0:
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

result = factorize(n)
print(result)