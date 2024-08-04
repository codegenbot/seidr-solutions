def bouncing_balls():
    start_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / start_height
    num_bounces = int(input())

    total_distance = 0.5 * (1 + bounciness_index) ** (num_bounces) - 0.5

    return format(total_distance, ".4f")


print(bouncing_balls())