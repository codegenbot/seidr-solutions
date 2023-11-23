from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return []

    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            factors.append(i)
    if n > 1:
        factors.append(n)
    return factors

while True:
    try:
        user_input = int(input())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

result = factorize(user_input)
print(result)