```
start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    distance_traveled = 2 * start_height
    total_distance += distance_traveled
    start_height *= (1 - bounciness_index)  
print(int(total_distance))