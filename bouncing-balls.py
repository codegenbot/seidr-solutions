start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

distance_per_bounce = 0
for _ in range(num_bounces):
    distance_per_bounce += bounciness_index * start_height
    start_height *= bounciness_index

print("{:.6f}".format(distance_per_bounce))