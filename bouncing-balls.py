def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2 * start_height * (1 - bounciness_index)) ** bounces

    return f"{total_distance:.6f}"


print(bouncing_balls())