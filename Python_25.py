import sys
import select

def factorize(n):
    factors = []
    for i in range(1, n + 1):
        if n % i == 0:
            factors.append(i)
    return factors

try:
    print("Enter a number: ")
    rlist, _, _ = select.select([sys.stdin], [], [], 10)

    if rlist:
        n = int(input())

        result = factorize(n)
        print(result)

except ValueError:
    print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    print("No input received. Program terminated.")