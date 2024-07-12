def is_multiply_prime(n):
    if n < 2:
        return False
    total = 1
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            if i * i == n:
                return True
            j = i
            while n % j == 0:
                n //= j
            total *= j
    return is_prime(total) and is_prime(n)


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