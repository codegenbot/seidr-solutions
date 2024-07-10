from typing import List

def factorize() -> None:
    while True:
        try:
            n = int(input("Enter a number (or 0 to quit): "))
            if n == 0:
                break
            i = 2
            while i * i <= n:
                if n % i:
                    i += 1
                else:
                    count = 0
                    while n % i == 0:
                        n //= i
                        count += 1
                    print(f"{i} is a factor with multiplicity {count}.")
            if n > 1:
                print(f"{n} is a prime number.")
        except ValueError:
            print("Invalid input. Please enter an integer.")