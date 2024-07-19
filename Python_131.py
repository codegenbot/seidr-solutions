import math

n = input()
if not n.isdigit() or int(n) <= 0:
    print("Invalid input. Please enter a valid positive integer greater than zero.")
else:
    result = math.prod(map(int, str(n)))
    print(result)