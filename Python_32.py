def find_zero(xs):
    for i in range(len(xs)):
        if sum(x * (2**j) for j, x in enumerate(reversed(list(xs[: i + 1])))) == 0:
            return xs[i]
    return 0