def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    distance_per_bounce = 2 * start_height
    total_distance = distance_per_bounce * (1 + bounciness_index) ** bounces

    return str(round(total_distance, 5))

print(bouncing_balls())