def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += math.log2(bounciness_index) * (
            start_height + first_bounce_height
        )
        start_height, first_bounce_height = (
            first_bounce_height,
            bounciness_index * start_height,
        )

    return format(total_distance, ".4f")


print(bouncing_balls())