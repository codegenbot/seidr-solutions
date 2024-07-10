while True:
    try:
        num = int(input("Enter a number to factorize: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")


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


result = factorize(num)
print(result)