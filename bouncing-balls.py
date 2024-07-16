```
starting_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / starting_height

num_bounces = int(input())

total_distance = 0
height = starting_height
for _ in range(num_bounces):
    total_distance += height - starting_height
    height *= bounciness_index * 2 + 3

print(total_distance)