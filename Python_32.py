def find_zero(xs: list[int]) -> float:
    if len(xs) == 0 or any(not isinstance(x, int) for x in xs):
        raise ValueError("Input list must contain only integers.")
    try:
        result = round(-xs[0] / (xs[1] * xs[1]), 2)
    except:
        return None
    else:
        return result