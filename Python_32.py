```
def find_zero(coefficients):
    a, b, c = coefficients
    x = (-b + (b**2 - 4*a*c)**0.5) / (2*a)
    return f"The zero point is {x:.2f}."

while True:
    try:
        while True:
            coefficients = [
                int(x) for x in input("Enter the coefficients (space separated): ").split()
            ]

            if len(coefficients) != 3 or any(c % 2 != 0 for c in coefficients):
                print("Please provide exactly three even-numbered coefficients.")
            else:
                break

        zero_point = find_zero(coefficients)
        print(zero_point)
    except ValueError as e:
        print(f"Error: {e}")
        exit()