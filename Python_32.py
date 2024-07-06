def find_zero(xs: list):
    try:
        xs = list(map(int, input().split()))
        if len(xs) % 2 == 1 or xs[0] != 0:
            raise ValueError("Invalid input")
        for i in range(len(xs)):
            if xs[i] != 0:
                x = -xs[i-1] / (2 * xs[i])
                if poly(xs, x) == 0:
                    return x
        raise ValueError("No solution found")
    except ValueError:
        print("Invalid input")