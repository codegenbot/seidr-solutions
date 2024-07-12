starting_height = float(input())
first_bounce_height = float(input())
num_bounces = float(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height + (starting_height + first_bounce_height) * (bounciness_index ** num_bounces)

print(total_distance)