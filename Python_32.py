def find_zero(xs: list[int]) -> float:
    if len(xs) == 0 or any(not isinstance(x, int) for x in xs):
        raise ValueError("Input list must contain only integers.")

    try:
        result = round(-xs[-1] / (xs[0] * xs[0]), 2)
        return result
    except:
        return None