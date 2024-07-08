try:
    if len(coefficients) < 2:
        raise ValueError("You must enter at least two coefficients to find zero value.")
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))