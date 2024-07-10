def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_of_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (
        2 * (1 - math.pow(bounciness_index, -num_of_bounces)) * starting_height
    )

    return total_distance


print(bouncing_balls())