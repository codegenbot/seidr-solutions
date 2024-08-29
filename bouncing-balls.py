def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for i in range(1, bounces + 1):
        total_distance += 2 * (
            start_height + (bounciness_index ** (i - 1) - 1) * start_height
        )

    return "{:.3f}".format(total_distance)


print(bouncing_balls())