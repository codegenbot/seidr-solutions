def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0.0

    for _ in range(num_bounces):
        first_bounce_height = start_height * bounciness_index
        total_distance += 2 * start_height
        start_height *= 0.8  

    return format(total_distance, ".4f")

print(bouncing_balls())