input_str = input()
starting_height = float(input_str)

first_bounce_height = 0.6 * starting_height
num_bounces = 11

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + first_bounce_height + 2 * first_bounce_height * (1 + bounciness_index) ** num_bounces

print(total_distance)