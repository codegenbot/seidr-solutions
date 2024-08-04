starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height

total_distance = 0
current_height = starting_height

for _ in range(num_bounces):
    total_distance += current_height
    current_height *= bounciness_index

print(total_distance)