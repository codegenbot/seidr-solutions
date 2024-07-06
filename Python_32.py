def find_zero(xs):
    if len(xs) == 0:
        raise ValueError("Input list must not be empty.")
    for i in range(len(xs)):
        if xs[i] == 0:
            return i
    raise ValueError("No zero found in the input list.")