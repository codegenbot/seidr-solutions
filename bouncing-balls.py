def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** num_bounces

    return str(bounciness_index)


print(bouncing_balls())