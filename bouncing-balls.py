starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
current_height = first_bounce_height
for _ in range(num_bounces):
    total_distance += abs(current_height - starting_height)
    current_height /= bounciness_index

print(round(total_distance, 4))