```
import math

def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    bounces = int(input())

    total_distance = (
        2
        * (h0 + hf)
        * ((1 - math.pow(bounciness_index, -bounces)) / (1 - bounciness_index))
    )

    print(total_distance)


bouncing_balls()