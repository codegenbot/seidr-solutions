def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces):
        total_distance += 2 * start_height * (1 - math.pow(bounciness_index, -1))
        height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()