```
start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

distance = 0
prev_height = start_height
for _ in range(num_bounces):
    distance += prev_height
    prev_height *= (1 - bounciness_index)

print(round(distance, 5))