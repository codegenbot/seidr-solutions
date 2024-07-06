def find_zero(xs):
    # Read input from the user and store it as a string
    s = input("Enter a list of integers separated by spaces: ")
    # Split the string into a list of integers
    xs = [int(x) for x in s.split()]
    # Loop through the list and find the first zero
    for i, x in enumerate(xs):
        if x == 0:
            print(f"The first zero found at position {i}")
            return i
    else:
        print("No zeros found")