def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    total_distance = 0
    height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += start_height + height * (1 + bounciness_index)
        height *= bounciness_index

    return f"{total_distance:.4f}"

print(bouncing_balls())