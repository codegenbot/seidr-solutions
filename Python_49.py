def modp(n: int, p: int):
    if p == 0:
        return 1
    result = pow(n % p, p // 2, p)
    if p % 2 == 0:
        return (result * result) % p
    else:
        return (n * result * result) % p


def is_prime(num: int):
    if num < 2:
        return False
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            return False
    return True


def main():
    while True:
        num = int(input("Enter a number: "))
        while num <= 0:
            print("Invalid input. Please enter a positive integer.")
            num = int(input("Enter a number: "))

        p = int(input("Enter the prime number: "))
        while p <= 1 or not is_prime(p):
            print("Invalid input. Please enter a prime number greater than 1.")
            p = int(input("Enter the prime number: "))

        if is_prime(p):
            print(f"{num} to the power of {p} mod {p} is {modp(num, p)}")
            break
        else:
            print("The given prime number is not valid. Please enter a prime number.")


if __name__ == "__main__":
    main()