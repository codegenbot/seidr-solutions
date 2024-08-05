def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.5 * (1 + bounciness_index) ** (num_bounces)

    return f"{total_distance:.4f}"


print(bouncing_balls())