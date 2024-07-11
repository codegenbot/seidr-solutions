def find_zero(xs):
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    elif xs[0] != 0:
        return "Error: xs must be [0, *coefficients*]"
    else:
        x = xs[1]
        y = xs[3:]

        for i in range(len(y)):
            if y[i] == 0 and (i % 2 == 0 or len(y) % 2 != i):
                return "Error: xs must be [0, *coefficients*]"

        if sum(y) == 0:
            return None
        elif x[1:] != y:
            return None
        else:
            if len(x) % 2 != 0:
                return None
            n = int(sum(x) / (sum(y) or 1))
            return n