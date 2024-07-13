from math import sqrt, inf


def largest_prime_factor(n):
    if n < 2:
        return None
    i = 2
    max_prime = 0
    while True:
        if n % i == 0:
            j = i
            while n % j == 0:
                n //= j
            max_prime = j
        if i > sqrt(n):
            return max_prime
        i += 1


def main():
    n = int(input("Enter a number: "))
    print(largest_prime_factor(n))


if __name__ == "__main__":
    main()