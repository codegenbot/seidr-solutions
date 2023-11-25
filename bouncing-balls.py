height_start = float(input())
height_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_bounce / height_start
total_distance = height_start + (2 * height_bounce * num_bounces) - (height_bounce / bounciness_index)

print(total_distance)