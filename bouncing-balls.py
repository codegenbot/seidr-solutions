import math


def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    num_bounces = int(input())

    total_distance = (2 * (1 - math.pow(bounciness_index, 2))) * num_bounces
    print(format(total_distance, ".4f"))


bouncing_balls()