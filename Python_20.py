def find_closest_elements():
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))
    diff = abs(num2 - num1)

    return f"The closest numbers are {num1} and {num2}, which differ by {diff}."