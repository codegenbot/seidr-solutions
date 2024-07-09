```
import math

def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounces = int(input())

    bounciness_index = h2 / h1
    total_distance = (
        (h1 + h2) * (1 - math.pow(bounciness_index, -bounces)) / (1 - bounciness_index)
    )

    print(format(total_distance, ".4f"))

bouncing_balls()