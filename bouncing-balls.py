```
import math

start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height
total_distance = 0

for _ in range(num_bounces):
    total_distance += start_height * bounciness_index + (1 - 0.5) ** (_+1)
    start_height *= (1 - 0.5)

print(round(total_distance, 4))