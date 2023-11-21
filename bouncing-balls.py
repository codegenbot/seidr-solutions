starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = first_bounce_height

while num_bounces > 0:
    first_bounce_height *= bounciness_index
    total_distance += 2 * first_bounce_height
    num_bounces -= 1

total_distance