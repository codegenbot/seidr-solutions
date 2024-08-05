while True:
    try:
        n = int(input())
        break
    except ValueError:
        print("Please enter a valid integer")


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


print(factorize(n))