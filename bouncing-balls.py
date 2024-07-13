def calculate_bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        (1 - math.pow(bounciness_index, -(num_bounces + 1))) * start_height * 2
    )

    return round(total_distance, 6)


print(calculate_bouncing_balls())