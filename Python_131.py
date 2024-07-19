import math

while True:
    try:
        n = int(input("Enter a positive integer: "))
        if n > 0:
            result = math.prod(map(int, str(n)))
            print(result)
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a positive integer.")