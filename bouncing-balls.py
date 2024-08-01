def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** bounces
    total_distance = 2 * (1 - math.pow(bounciness_index, 0.5))

    return str(format(total_distance, ".4f"))


print(bouncing_balls())