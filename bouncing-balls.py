def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 2 * (start_height + (1 - bounciness_index) ** (num_bounces + 1) - start_height)

    return format(total_distance, ".4f")


print(bouncing_balls())