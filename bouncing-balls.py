def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * (1 + bounciness_index) ** bounces - 1

    return f"{total_distance:.6f}"


print(bouncing_balls())