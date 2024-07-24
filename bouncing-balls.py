def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (bounces * 2) + ((bounces * 2) - 1) * (1 - bounciness_index)

    return str(round(total_distance, 4))


print(bouncing_balls())