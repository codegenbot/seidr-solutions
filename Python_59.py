import math


def largest_prime_factor(n):
    i = 2
    while i <= math.sqrt(n):
        if n % i == 0:
            j = i
            while n % j == 0:
                n //= j
            return j
        i += 1
    if n > 1:
        return j
    else:
        return None


def main():
    n = int(input("Enter a number: "))
    print(largest_prime_factor(n))


if __name__ == "__main__":
    main()