import math


def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = 0
    prev_height = h1
    for _ in range(num_bounces):
        total_distance += (h1 + abs(h2 - h1)) * 2
        prev_height = max(0, prev_height * bounciness_index)
    return round(total_distance, 4)


print(round(bouncing_balls(), 4))