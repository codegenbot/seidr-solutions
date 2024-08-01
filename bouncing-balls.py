def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / starting_height
    num_bounces = int(input())
    total_distance = (2 * (1 + bounciness_index)) ** num_bounces - 1
    return str(total_distance)


print(bouncing_balls())