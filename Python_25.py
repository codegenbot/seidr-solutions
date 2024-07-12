import sys
import select

def factorize(n):
    return [i for i in range(1, n + 1) if n % i == 0]

try:
    print("Enter a number: ")
    rlist, _, _ = select.select([sys.stdin], [], [], 10)
    
    if rlist:
        n = int(input())
        
        result = factorize(n)
        print(result)
    else:
        print("No input received within 10 seconds.")
except ValueError:
    print("Invalid input. Please enter a valid number.")
except KeyboardInterrupt:
    print("No input received. Program terminated.")