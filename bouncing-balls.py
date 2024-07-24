starting_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = (1 - math.pow(bounciness_index, num_of_bounces)) * 2 * starting_height

print(f"{total_distance:.6f}")