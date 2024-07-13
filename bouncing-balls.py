def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + 2**0.5) ** bounces

    return "{:.3f}\n{}".format(bounciness_index, total_distance)


print(bouncing_balls())