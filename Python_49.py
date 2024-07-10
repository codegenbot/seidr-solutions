def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def modp(num, p):
    if num < p:
        return num
    res = 1
    while num > 1:
        if num & 1:
            res = (res * num) % p
        num //= 2
    return res


def main():
    while True:
        num = input("Enter a number: ")
        p = input("Enter the prime number: ")

        try:
            num = int(num)
            p = int(p)
            break
        except ValueError:
            print("Invalid input. Please enter numbers.")

    if is_prime(p):
        n = num**p
        result = modp(n, p)
        print(f"{num} to the power of {p} mod {p} is {result}")
    else:
        print("The given prime number is not valid. Please enter a prime number.")


if __name__ == "__main__":
    main()