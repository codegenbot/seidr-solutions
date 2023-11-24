starting_height = float(input())
first_bounce_height = starting_height * float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height
total_distance = 0

current_height = starting_height

for _ in range(num_bounces):
    total_distance += 2 * current_height
    current_height *= bounciness_index

total_distance -= current_height

print(total_distance)