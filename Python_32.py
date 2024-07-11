def find_zero():
    user_input = input("Enter the coefficients: ")
    if not user_input:
        return "Error: xs must start with 0"

    coefficients = list(map(int, user_input.split()))
    
    x = []
    y = []

    for i in range(0, len(coefficients), 2):
        x.append(coefficients[i])
        y.append(coefficients[i+1])

    if x[0] != 0:
        return "Error: xs must be [0, *coefficients*]"
    
    if any(y_val == 0 for y_val in y):
        if (len(y) % 2 != 0 or len([y_val for y_val in y if y_val != 0]) % 2 == 0):
            return "Error: xs must be [0, *coefficients*]"

    if sum(y) == 0:
        return None

    if x[1:] != y:
        return None

    if len(x) % 2 != 0:
        return None
    
    n = int(sum(x) / (sum(y) or 1))
    return n