from functools import reduce

while True:
    try:
        n = int(input("Enter a positive integer greater than zero: "))
        if n <= 0:
            print("Invalid input. Please enter a valid positive integer greater than zero.")
        else:
            result = reduce(lambda x, y: x * y, map(int, str(n)), 1)
            print(result)
            break
    except ValueError:
        print("Invalid input. Please enter a valid positive integer greater than zero.")