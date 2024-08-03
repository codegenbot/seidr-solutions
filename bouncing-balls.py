def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (2**num_bounces - 1) * (start_height + first_bounce_height)
    return round(total_distance, 5)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_balls(start_height, first_bounce_height, num_bounces), 4))