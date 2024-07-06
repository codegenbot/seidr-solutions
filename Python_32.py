def find_zero(xs):
    # Read input from the user
    inputs = input("Enter a list of integers separated by spaces: ").split()
    for i, x in enumerate(inputs):
        if int(x) == 0:
            print(f"The first zero found at position {i}")
            return i
    else:
        print("No zeros found")