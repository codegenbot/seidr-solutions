```
user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

if not all(isinstance(x, float) for x in coefficients):
    print("Invalid input. Please enter a list of numbers separated by spaces.")
else:
    try:
        if len(coefficients) < 2:
            raise ValueError("You must enter at least two coefficients")
        result = find_zero(coefficients)
        print(result)
    except ValueError as e:
        print(str(e))