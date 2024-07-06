def find_zero(xs: list):
    # Read input from user
    xs = list(map(int, input().split()))

    # Your code here
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    return -1