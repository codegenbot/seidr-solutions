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

inputs = []
while True:
    try:
        line = input()
        if not line:
            break
        inputs.append(int(line))
    except EOFError:
        break

for n in inputs:
    result = factorize(n)
    print(result)