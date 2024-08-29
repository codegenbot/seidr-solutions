def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * abs(start_height - first_bounce_height) + abs(
            first_bounce_height
        ) * (1 - bounciness_index**2)
        start_height, first_bounce_height = (
            first_bounce_height,
            first_bounce_height * bounciness_index,
        )

    return round(total_distance, 5)


print(bouncing_balls())