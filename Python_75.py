def is_multiply_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            if is_prime(i) and is_prime(n // i):
                return True
    if is_prime(n):
        return True
    return False


def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


if __name__ == "__main__":
    while True:
        try:
            num = int(input("Enter a number: "))
            if num < 2:
                print(
                    "Invalid input. Please enter a number greater than or equal to 2."
                )
                continue
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    print(is_multiply_prime(num))