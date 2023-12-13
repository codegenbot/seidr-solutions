starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_after_first_bounce / starting_height
total_distance = starting_height
for i in range(num_bounces):
    total_distance += 2 * height_after_first_bounce
    height_after_first_bounce *= bounciness_index

print(total_distance)