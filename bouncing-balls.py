def bouncing_balls():
    s_height = float(input())
    first_bounce = float(input())
    bounciness_index = first_bounce / s_height
    num_bounces = int(input())

    total_distance = 0
    height = s_height
    for _ in range(num_bounces):
        total_distance += 2 * (s_height + height)
        height = max(height * bounciness_index, 0.01)

    return str(total_distance)