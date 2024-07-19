import math

try:
    n = input("Enter a positive integer: ").strip()
    if not n.isdigit() or int(n) <= 0:
        raise ValueError("Please enter a positive integer greater than zero.")

    result = math.prod(map(int, str(n)))
    print(result)

except ValueError as e:
    print(e)
except Exception as e:
    print("Invalid input. Please enter a valid positive integer.")