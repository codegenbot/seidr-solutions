def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (1 + 2**0.5) ** num_bounces * starting_height

    return "{:.6f}\n{}".format(bounciness_index, round(total_distance, 6))


print(bouncing_balls())