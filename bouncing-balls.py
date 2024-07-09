def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0.0
    height = start_height

    for _ in range(num_bounces):
        height *= (
            bounciness_index * 2
        )  # the ball travels twice the distance of each bounce
        total_distance += height

    return round(total_distance, 4)


print(bouncing_balls())