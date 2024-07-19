def below_threshold(l: list, t: int):
    return all(num < t for num in l)