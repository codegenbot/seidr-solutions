from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y if int(y) % 2 != 0 else x, (int(d) for d in str(n)), 1)

while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")

result = digits(n)
print(result)