def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    distance = 2 * (1 - math.pow(bounciness_index, num_bounces)) * start_height
    return round(distance, 3)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_ball(start_height, first_bounce_height, num_bounces), 3))