def find_zero(xs):
    # Read input from the user
    num = int(input("Enter a number: "))

    # Return the corresponding output
    if num == 0:
        return "Found zero!"
    else:
        return f"{num} is not zero."