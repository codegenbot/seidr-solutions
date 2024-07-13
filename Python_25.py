from typing import List

def factorize(n: int) -> List[int]:
    factors = []
    i = 2
    if n > 1:
        while i * i <= n:
            if n % i:
                i += 1
            else:
                count = 0
                while n % i == 0:
                    count += 1
                    n //= i
                factors.append(i ** count)
        if n > 1:  
            factors.append(n)
    return factors

while True:
    try:
        num = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter an integer.")

print(factorize(num))