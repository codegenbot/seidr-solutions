```Python
from typing import List

def main():
    n = int(input("Enter a number: "))
    factors = []
    i = 2
    while i * i <= n:
        if n % i:
            i += 1
        else:
            n //= i
            count = 0
            while n % i == 0:
                n //= i
                count += 1
            factors.extend([i] * count)
    if n > 1:
        factors.append(n)
    print("The prime factorization of the number is:", factors)

if __name__ == "__main__":
    main()