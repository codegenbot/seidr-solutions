def find_zero(xs):
    while True:
        try:
            n = len(xs) // 2
            for i in range(len(xs)):
                if xs[i] == 0:
                    return -xs[n - 1] / xs[i]
            return -xs[n - 1] / xs[-1]
        except ZeroDivisionError:
            print("Invalid input. Please provide a list with at least two non-zero elements.")