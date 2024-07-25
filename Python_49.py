```
def is_prime(num: int) -> bool:
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def main():
    print("Please enter a series of integers to check if they're prime, or '0' to quit.")
    while True:
        prompt = input("Enter a number (or 0 to quit): ")
        if prompt == '0':
            break
        try:
            num = int(prompt)
            print(is_prime(num))
        except ValueError:
            print("Invalid input. Please enter a valid integer.")


if __name__ == "__main__":
    main()