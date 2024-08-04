starting_height = float(input())
height_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_first_bounce / starting_height
total_distance = starting_height + height_first_bounce

for _ in range(2, num_bounces + 1):
    total_distance += 2 * height_first_bounce
    height_first_bounce *= bounciness_index

print(total_distance)