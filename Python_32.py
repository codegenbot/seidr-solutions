def find_zero(xs: list):
    # Your code here
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1