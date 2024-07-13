import math


def largest_prime_factor(n):
    i = 2
    max_prime = 0
    while n > 1:
        if n % i == 0:
            j = i
            while n % j == 0:
                n //= j
            max_prime = j
        i += 1
    return max_prime


def main():
    n = int(input("Enter a number: "))
    print(largest_prime_factor(n))


if __name__ == "__main__":
    main()