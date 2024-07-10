start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    start_height *= 2
    distance_per_bounce = start_height * (2 ** (_ - 1)) * bounciness_index
    total_distance += distance_per_bounce

print(str(int(total_distance)))