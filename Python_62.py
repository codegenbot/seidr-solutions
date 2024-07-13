def derivative(xs: list):
    return [i * x for i, x in zip([x * (len(xs) - 1) for x in xs][1:], xs)]