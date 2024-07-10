bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    total_distance += (1 + bounciness_index) * start_height
    start_height *= 2

print(int(total_distance))