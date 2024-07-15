import math

def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())
    total_distance = 0
    for _ in range(n):
        total_distance += 2 * math.log((h + b) / (2 * h))
        b, _ = b, (b - b*i)

    return format(total_distance, ".6f")