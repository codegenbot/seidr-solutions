def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = (2**0.5) * (1 - bounciness_index) ** (-num_bounces)

    return format(total_distance, ".4f")


print(bouncing_balls())