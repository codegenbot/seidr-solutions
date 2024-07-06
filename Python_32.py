def find_zero(xs):
    # Read input from the user
    xs = [
        int(x) for x in input("Enter a list of integers separated by spaces: ").split()
    ]
    for i, x in enumerate(xs):
        if x == 0:
            return i
    else:
        print("No zeros found")