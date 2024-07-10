```
start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
distance_per_bounce = (1 + bounciness_index)
for _ in range(num_bounces):
    start_height *= 2
    distance_per_bounce = (1 + bounciness_index) ** -1
    total_distance += distance_per_bounce * start_height

print(str(int(total_distance)))