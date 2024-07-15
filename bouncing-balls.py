import math


def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 2 * (h + sum([math.log((h + b) / (2 * h)) for _ in range(n)]))

    return format(total_distance, ".6f")