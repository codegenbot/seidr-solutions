from typing import List


def factorize(n: int) -> List[int]:
    if n <= 0:
        return [n]
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
    print("Please enter numbers to factorize. Type 'quit' to exit.")
    while True:
        print("Please enter a number or type 'quit': ")
        user_input = input()
        if user_input.strip().lower() == "quit":
            break
        try:
            user_input = int(user_input)
            if user_input > 0:
                result = factorize(user_input)
                print(f"The prime factors of {user_input} are: {result}")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


if __name__ == "__main__":
    main()