def find_zero(xs: list):
    n = int(input("Enter a number: "))
    for i, x in enumerate(xs):
        if x == 0:
            return i
    return -1