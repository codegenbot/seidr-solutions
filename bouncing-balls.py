```
starting_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / starting_height

num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    new_height = bounciness_index * (2 * _ + 3)
    total_distance += new_height - starting_height

print(total_distance)