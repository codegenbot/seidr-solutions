```
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

distance_per_bounce = 0
previous_height = start_height
for _ in range(num_bounces):
    distance_per_bounce += previous_height - first_bounce_height + start_height
    previous_height *= bounciness_index
    start_height *= bounciness_index

print("{:.6f}".format(distance_per_bounce))