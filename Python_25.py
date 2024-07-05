from typing import List

def factorize(n: int) -> List[int]:
    if n <= 1:
        return []
    factors = []
    divisor = 2
    while n > 1:
        while n % divisor == 0:
            factors.append(divisor)
            n //= divisor
        divisor += 1
    return factors

if __name__ == "__main__":
    try:
        n = int(input("Enter an integer: ").strip())
        if n <= 1:
            print([] if n == 1 else "Input must be greater than 0.")
        else:
            result = factorize(n)
            print(result)
    except ValueError:
        print("Invalid input. Please enter an integer.")