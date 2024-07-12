```
def is_multiply_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if is_prime(i) and n % i == 0:
            j = n // i
            if is_prime(j):
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
            num = input("Enter a number: ")
            num = int(num)
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    if num < 2:
        print("Invalid input. Please enter a number greater than or equal to 2.")
    else:
        print(is_multiply_prime(num))