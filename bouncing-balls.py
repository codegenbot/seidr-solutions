def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(num_bounces - 1):
        start_height = first_bounce_height
        first_bounce_height /= bounciness_index
        total_distance += 2 * (start_height - first_bounce_height)
    return round(total_distance, 5)


height_start = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_ball(height_start, first_bounce_height, num_bounces), 5))