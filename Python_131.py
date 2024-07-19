import math
import sys

while True:
    try:
        n = int(sys.stdin.readline().strip())
        if n <= 0:
            print("Invalid input. Please enter a valid positive integer greater than zero.")
        else:
            result = math.prod(map(int, str(n)))
            print(result)
            break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer greater than zero.")