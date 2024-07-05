starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = starting_height

current_height = first_bounce_height
if num_bounces > 0:
    total_distance += current_height  # Add first bounce height
    for _ in range(1, num_bounces):
        current_height *= bounciness_index
        total_distance += 2 * current_height  # Add double the height for subsequent bounces

print(total_distance)