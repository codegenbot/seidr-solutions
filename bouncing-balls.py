```
start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

total_distance = 0
for _ in range(num_bounces):
    distance_per_bounce = (1 + bounciness_index)
    new_height = start_height * (2 ** (_ + 1)) * bounciness_index
    total_distance += distance_per_bounce * new_height
    start_height = new_height

print(int(total_distance))