from math import comb


def car_race_collision(n: int):
    if not isinstance(n, int) or n < 1:
        return
    return 2 * comb(n, 2)