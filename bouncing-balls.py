def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * abs(bounciness_index - 1) * start_height
        start_height *= bounciness_index
    return round(total_distance, 5)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_ball(start_height, first_bounce_height, num_bounces), 5))