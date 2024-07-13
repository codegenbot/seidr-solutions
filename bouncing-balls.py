def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (2**num_bounces) * (start_height + first_bounce_height)

    return f"{bounciness_index:.3f}\n{total_distance:.6f}"


print(bouncing_balls())