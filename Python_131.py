from functools import reduce

def digits(n: int) -> int:
    if n <= 0:
        raise ValueError("Invalid input. Please enter a valid positive integer greater than zero.")
    return reduce(lambda x, y: x*y, (int(d) for d in str(n)), 1)

try:
    n = int(input("Enter a number: "))
    result = digits(n)
    print(result)
except ValueError as e:
    print(e)