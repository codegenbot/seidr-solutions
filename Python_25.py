from typing import List


def get_integer_input(prompt: str) -> int:
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalid input. Please enter an integer.")


def main():
    num = get_integer_input("Enter a number to factorize: ")
    factors = factorize(num)
    print(f"The prime factors of {num} are: {factors}")


def factorize(n: int) -> List[int]:
    factors = []
    while n % 2 == 0:
        factors.append(2)
        n //= 2
    i = 3
    while i * i <= n:
        if n % i == 0:
            factors.extend([i] * (n // i - 1))
            n //= i
        else:
            i += 2
    if n > 1:
        factors.append(n)
    return factors


if __name__ == "__main__":
    main()