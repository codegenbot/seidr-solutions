def find_zero(xs: list):
    # Find the zero of the polynomial using numpy's roots function
    return np.roots(xs)[0]