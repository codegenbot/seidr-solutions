```
def find_zero():
    while True:
        try:
            a = float(input("Enter coefficient 'a': "))
            b = float(input("Enter coefficient 'b': "))
            c = float(input("Enter coefficient 'c': "))
            return f"Root 1: {round((-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a), 2)}, Root 2: {round((-b - math.sqrt(b**2 - 4 * a * c)) / (2 * a), 2)}"
        except ValueError:
            print("Invalid input. Please enter numeric values.")

while True:
    print("Find roots of quadratic equation ax^2 + bx + c = 0: ")
    print(find_zero())