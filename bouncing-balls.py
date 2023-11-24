starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = (first_bounce_height * (1 + bounciness_index) * num_bounces) - starting_height

print(round(total_distance, 14))