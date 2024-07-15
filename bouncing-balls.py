```
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

current_height = start_height
for i in range(num_bounces):
    distance = current_height * 2
    total_distance += distance
    if i < num_bounces - 1:
        current_height *= bounciness_index
        current_height *= bounciness_index  # multiply by the same index for each bounce

print(total_distance)