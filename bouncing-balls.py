def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 2 * (1 - math.pow(bounciness_index, num_bounces)) * starting_height
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = bouncing_balls(starting_height, first_bounce_height, num_bounces)

print(result)