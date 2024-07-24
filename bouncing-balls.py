def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces):
        total_distance += abs(current_height - start_height)
        current_height *= bounciness_index
    return round(total_distance, 5)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(bouncing_ball(start_height, first_bounce_height, num_bounces))