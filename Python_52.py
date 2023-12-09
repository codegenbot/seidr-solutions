def below_threshold(l: list, t: int):
    return all(x < t for x in l)