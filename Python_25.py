from typing import List

def main():
    n = int(input("Enter a number: "))
    try:
        if not isinstance(n, int):
            raise ValueError("Input must be an integer.")
        factors = []
        i = 2
        while i * i <= n:
            if n % i:
                i += 1
            else:
                count = 0
                while n % i == 0:
                    n //= i
                    count += 1
                factors.append(i ** count)
                i += 1
        if n > 1:
            factors.append(n)
        print(f"The factors of {n} are: {factors}")
    except ValueError as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    main()