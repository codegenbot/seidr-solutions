```
def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (2 * num_bounces) / (1 - math.pow(bounciness_index, 0.5))
    return round(total_distance, 4)

start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_ball(start_height, first_bounce_height, num_bounces), 4))