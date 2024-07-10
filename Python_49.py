```
def main():
    while True:
        try:
            num = int(input("Enter a number: "))
            p = int(input("Enter the prime number: "))
            break
        except ValueError:
            print("Invalid input. Please enter numbers.")

    if is_prime(p):
        print(f"{num} to the power of {p} mod {p} is {modp(num, p)}")
    else:
        print("The given prime number is not valid. Please enter a prime number.")


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True


def modp(num, p):
    return num ** p % p