```
def find_zero():
    while True:
        try:
            line1 = list(map(float, input("Enter coefficients for the first line (a b): ").split()))
            line2 = list(map(float, input("Enter coefficients for the second line (c d): ").split()))
            if len(line1) != 2 or len(line2) != 2:
                print("Invalid input. Please enter exactly two numbers for each line.")
                continue
            a, b = line1
            c, d = line2
            if not all(isinstance(x, (int, float)) for x in [a, b, c, d]):
                print("Invalid input. Please enter numeric values.")
                continue
            x = round((d - b) / (a - c), 2)
            return [(x, round(a * x + b, 2))]
        except ValueError:
            print("Invalid input. Please enter exactly two numbers for each line.")