from typing import List


def factorize(n: int) -> List[int]:
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


while True:
    try:
        input_line = input("Enter an integer: ")
        n = int(input_line)
        break
    except ValueError:
        print("Please input a valid integer value!")

result = factorize(n)
print(result)