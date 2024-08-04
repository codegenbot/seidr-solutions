start_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

bounciness_index = height_after_first_bounce / start_height

total_distance = 0
for i in range(num_of_bounces):
    total_distance += (1 + bounciness_index) ** (i + 1) - (1 + bounciness_index) ** i

print(total_distance)