from functools import reduce

def digits(n):
    return reduce(lambda x, y: x*y, (int(d) for d in str(n) if int(d) % 2 != 0), 1)

while True:
    try:
        n = int(input("Enter a number: "))
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")
    except KeyboardInterrupt:
        print("Input interrupted. Please enter a valid integer.")

result = digits(n)
print(result)