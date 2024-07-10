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

num = int(input("Enter a positive integer greater than 1 to factorize: "))
while num <= 1:
    print("Please enter a positive integer greater than 1.")
    num = int(input("Enter a positive integer greater than 1 to factorize: "))

result = factorize(num)

print(result)