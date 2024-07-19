from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y, (int(d) for d in str(n)), 1)

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n <= 0:
            print("Invalid input. Please enter a valid positive integer.")
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer.")

result = digits(n)
print(result)