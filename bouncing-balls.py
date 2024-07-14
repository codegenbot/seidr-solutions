def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2 * (1 + bounciness_index)) ** bounces - 2

    return str(round(total_distance, 5))


print(bouncing_balls())