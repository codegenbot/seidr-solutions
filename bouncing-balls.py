def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (_ * 2)

    return format(total_distance, ".6f")


print(bouncing_balls())