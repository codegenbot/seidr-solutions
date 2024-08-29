def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / starting_height
    total_distance = (1 + 2**0.5) * bounciness_index ** (num_bounces + 1) - 1

    return str(round(total_distance, 6))


print(bouncing_balls())