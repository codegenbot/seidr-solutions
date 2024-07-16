```
starting_height = float(input())
first_bounce_height = float(input())
first_bounce = first_bounce_height / starting_height

num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    total_distance += (starting_height * (2 ** (_ + 1))) / (1 - first_bounce)

print(total_distance)