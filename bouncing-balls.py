starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / starting_height

total_distance = 0
height = starting_height

for _ in range(num_bounces):
    total_distance += height
    height *= bounciness_index

print(total_distance)