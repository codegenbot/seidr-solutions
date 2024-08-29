def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    num_bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (2**num_bounces) * (bounciness_index - 1)

    return round(total_distance, 5)


print(bouncing_balls())