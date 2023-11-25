starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + (2 * bounciness_index * starting_height)
total_distance += (2 * bounciness_index ** 2 * starting_height) * (num_bounces - 1)

total_distance