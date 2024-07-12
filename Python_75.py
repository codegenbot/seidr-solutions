```
def is_multiply_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            if i * i == n and is_prime(i):
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
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    if is_multiply_prime(num):
        print(f"{num} is a multiply of two prime numbers.")
    else:
        print(f"{num} is not a multiply of two prime numbers.")