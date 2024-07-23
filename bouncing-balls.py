def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height

    num_bounces = int(input())

    total_distance = (2**0.5) * (
        (1 - math.pow(bounciness_index, -num_bounces)) / (1 - bounciness_index)
    )

    print(format(total_distance, ".4f"))


bouncing_balls()