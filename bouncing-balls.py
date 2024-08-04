def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(bounces):
        total_distance += 2 * (
            start_height + (first_bounce_height - start_height) * (1 - 0.5 ** (_ + 1))
        )

    return round(total_distance, 4)


print(bouncing_balls())