from functools import reduce

try:
    n = int(input())
    if n <= 0:
        print("Invalid input. Please enter a valid positive integer greater than zero.")
    else:
        result = reduce(lambda x, y: x * y, (int(d) for d in str(n)), 1)
        print(result)
except ValueError:
    print("Invalid input. Please enter a valid positive integer greater than zero.")