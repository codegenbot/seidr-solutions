```
start_height = float(input())
first_bounce_height = float(input())
bounciness_index = first_bounce_height / start_height
num_bounces = int(input())

distance = 0
last_height = start_height
for _ in range(num_bounces):
    distance += last_height - start_height
    last_height *= bounciness_index * 2
print(round(distance, 5))