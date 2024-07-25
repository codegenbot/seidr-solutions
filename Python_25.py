from typing import List


def factorize(n: int) -> List[int]:
    if n <= 0:
        return []
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.append(i**count)
            i += 1
    if n > 1:
        factors.append(n)
    return factors


def main():
    print("Enter numbers (at least 2) to factorize. Type 'quit' to exit.")
    while True:
        user_input = input("Please enter a number: ")
        if user_input.lower() == "quit":
            break
        try:
            user_input = int(user_input)
            if user_input >= 2:
                result = factorize(user_input)
                print(f"The prime factors of {user_input} are: {result}")
            else:
                print(
                    "Invalid input. Please enter an integer greater than or equal to 2."
                )
        except ValueError:
            print("Invalid input. Please enter a valid integer.")