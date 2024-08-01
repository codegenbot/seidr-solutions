def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + bounciness_index) ** num_bounces - 1

    return "{:.6f}\n{}".format(bounciness_index, format(total_distance, ".6g"))


print(bouncing_balls())