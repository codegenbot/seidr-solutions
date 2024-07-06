
def find_zero(xs):
    # Read input from the user
    user_input = input("Enter a list of integers separated by spaces: ")
    for i, x in enumerate(user_input.split()):
        if int(x) == 0:
            print(f"The first zero found at position {i}")
            return i
    else:
        print("No zeros found")