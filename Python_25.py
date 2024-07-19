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

if __name__ == "__main__":
    while True:
        try:
            n = int(input("Enter a number to factorize: "))
            if n > 0:
                break
            else:
                print("Enter a positive integer.")
        except ValueError:
            print("Enter a valid positive integer.")

    result = factorize(n)
    print(result)