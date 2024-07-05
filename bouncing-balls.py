starting_height = float(input().strip())
first_bounce_height = float(input().strip())
num_bounces = int(input().strip())

bounciness_index = first_bounce_height / starting_height

total_distance = starting_height
current_height = first_bounce_height

for _ in range(num_bounces):
    total_distance += 2 * current_height
    current_height *= bounciness_index

print(total_distance)