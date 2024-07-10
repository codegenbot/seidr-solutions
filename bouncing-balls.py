start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
distance_per_bounce = (1 + bounciness_index)
for _ in range(num_bounces):
    total_distance += distance_per_bounce * start_height
    start_height *= 2 ** (-bounciness_index)  
print(int(total_distance))