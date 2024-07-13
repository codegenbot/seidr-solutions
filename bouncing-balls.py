def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2 * bounces) / (1 - math.pow(bounciness_index, 2))

    return round(total_distance, 5)


print(bouncing_balls())