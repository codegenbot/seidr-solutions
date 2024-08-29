def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height

    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * (1 - math.pow(bounciness_index, -1))

    print(format(total_distance, ".4f"))


bouncing_balls()