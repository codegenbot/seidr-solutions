def is_multiply_prime(a, b):
    if is_prime(a) and is_prime(b):
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
            a = int(input("Enter the first number: "))
            b = int(input("Enter the second number: "))
            break
        except ValueError:
            print("Invalid input. Please enter integers.")
    print(is_multiply_prime(a, b))