def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (
        2
        * (1 - math.pow(bounciness_index, -num_bounces))
        / (1 + math.pow(bounciness_index, -1))
    )

    print(f"{total_distance:.4f}")


bouncing_balls()