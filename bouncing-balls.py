def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**0.5) * start_height * ((1 + bounciness_index) ** bounces - 1)

    return round(total_distance, 4)


print(bouncing_balls())