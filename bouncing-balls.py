def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(bounces):
        total_distance += (
            2
            * math.sqrt(start_height)
            * (1 - math.pow((start_height / first_bounce_height), 2))
        )
        start_height, first_bounce_height = (
            first_bounce_height,
            start_height * bounciness_index,
        )

    return str(round(total_distance, 6))


print(bouncing_balls())