
def find_zero(xs):
    # Read input from the user
    inp = input("Enter a list of integers separated by spaces: ")
    xs = [int(x) for x in inp.split()]
    for i, x in enumerate(xs):
        if x == 0:
            print(f"The first zero found at position {i}")
            return i
    else:
        print("No zeros found")