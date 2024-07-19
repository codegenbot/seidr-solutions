from functools import reduce

def digits(n):
    return reduce(lambda x, y: x + int(y), str(n), 0)

while True:
    try:
        n = int(input("Enter a number: "))
        if n <= 0:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer.")

result = digits(n)
print(result)