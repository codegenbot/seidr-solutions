def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + 2**0.5) * bounciness_index * (num_bounces**2)

    return f"{total_distance:.6f}"


print(bouncing_balls())