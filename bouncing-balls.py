height_start = float(input())
height_bounce = float(input())
num_bounces = int(input())

bounciness_index = height_bounce / height_start
total_distance = height_start + height_bounce

for _ in range(num_bounces - 1):
    height_bounce *= bounciness_index
    total_distance += height_bounce * 2

print(total_distance)