def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 2 ** (num_bounces * 1.5) - 1

    return f"{total_distance:.6f}"


print(bouncing_balls())