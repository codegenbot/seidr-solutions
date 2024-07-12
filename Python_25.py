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

while True:
    try:
        n = int(input("Please enter a positive integer value: ").strip())
        if n <= 0:
            print("Invalid input. Please enter a positive integer value.")
            continue
        print(factorize(n))
        break
    except ValueError:
        print("Invalid input. Please enter a positive integer value.")