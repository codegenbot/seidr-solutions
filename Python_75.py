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


def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            if is_multiply_prime(num):
                print(f"{num} is a product of two prime numbers.")
            else:
                print(f"{num} is not a product of two prime numbers.")
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != "y":
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()