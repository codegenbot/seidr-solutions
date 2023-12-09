starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = starting_height / first_bounce_height
total_distance = starting_height + (2 * first_bounce_height * (1 - bounciness_index**num_bounces)) / (1 - bounciness_index**num_bounces)

print(total_distance)