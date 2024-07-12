```
def is_multiply_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        while n % i == 0:
            j = n // i
            if not is_prime(i):
                break
            if not is_prime(j):
                break
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
    print(is_multiply_prime(num))