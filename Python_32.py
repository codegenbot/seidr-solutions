def find_zero(xs: list):
    closest = float("inf")
    for x in xs:
        if abs(x) < abs(closest):
            closest = x
    return closest if closest != float("inf") else None