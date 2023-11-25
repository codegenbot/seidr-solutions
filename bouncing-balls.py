starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height

for _ in range(num_bounces):
    total_distance += 2 * bounciness_index * total_distance

total_distance