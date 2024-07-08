```
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

distance_per_bounce = 0
for _ in range(num_bounces):
    distance_per_bounce += 2 * (start_height + first_bounce_height)
    start_height *= bounciness_index
    first_bounce_height *= bounciness_index

print("{:.6f}".format(2 * distance_per_bounce))