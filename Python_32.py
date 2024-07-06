def find_zero(xs):
    while True:
        try:
            x = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")

    for i, val in enumerate(xs):
        if val == 0:
            return f"The first zero is at index {i}"
    return "No zeros found."