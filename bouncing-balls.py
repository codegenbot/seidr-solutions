def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += math.log2(bounciness_index) * (
            start_height + first_bounce_height
        )

    return round(total_distance, 5)


print(round(bouncing_balls(), 5))