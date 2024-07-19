from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y, (int(d) for d in str(n)), 1)

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: "))
        if n <= 0:
            raise ValueError("Invalid input. Please enter a valid positive integer greater than zero.")
        result = digits(n)
        print(result)
        break
    except ValueError as e:
        print(e)