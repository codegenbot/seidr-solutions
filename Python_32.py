
def find_zero(xs):
    s = input("Enter a list of integers separated by spaces: ")
    xs = [int(x) for x in s.split()]
    for i, x in enumerate(xs):
        if x == 0:
            print(f"The first zero found at position {i}")
            return i
    else:
        print("No zeros found")