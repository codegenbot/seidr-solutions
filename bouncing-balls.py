def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)

    num_bounces = int(input())
    total_distance = 0

    for _ in range(num_bounces - 1):
        distance = 2 * abs(first_bounce_height - start_height)
        total_distance += distance
        first_bounce_height /= 2.0

    return round(total_distance + (abs(start_height) * 2 * num_bounces), 4)

print(bouncing_balls())