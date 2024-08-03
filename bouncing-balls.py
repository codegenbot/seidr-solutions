def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        0.5
        * (start_height + first_bounce_height)
        * (1 - math.pow(bounciness_index, num_bounces))
        / (1 - bounciness_index)
    )

    return round(total_distance, 4)