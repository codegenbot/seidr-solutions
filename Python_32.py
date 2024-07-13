def find_zero():
    while True:
        try:
            input_str = input()
            coefficients = [float(i) for i in input_str.split()]
            if len(coefficients) != 3:
                print("Invalid input. Please provide exactly three coefficients.")
            else:
                a, b, c = coefficients
                x1 = (-b + (b**2 - 4 * a * c) ** 0.5) / (2 * a)
                x2 = (-b - (b**2 - 4 * a * c) ** 0.5) / (2 * a)
                return f"The zero points are {x1:.2f} and {x2:.2f}."
        except Exception as e:
            print(f"Error: {str(e)}")


if __name__ == "__main__":
    try:
        find_zero()
    except Exception as e:
        print(f"Error: {str(e)}")