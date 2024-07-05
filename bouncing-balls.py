starting_height = float(input().strip())
first_bounce_height = float(input().strip())
num_bounces = int(input().strip())

bounciness_index = first_bounce_height / starting_height

total_distance = starting_height  # initial drop
current_height = first_bounce_height

for _ in range(num_bounces - 1):  # Correct loop to num_bounces - 1
    total_distance += 2 * current_height
    current_height *= bounciness_index

total_distance += current_height  # Add the last bounce up

print(total_distance)