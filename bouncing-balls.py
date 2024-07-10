```
import math

def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = abs(h2 - h1) * 2  
    prev_height = h2
    for _ in range(num_bounces):
        total_distance += 2 * abs(prev_height - h2)
        prev_height, h2 = h2, h2 * bounciness_index if h2 > 0 else 0
    return round(total_distance, 4)

print(round(bouncing_balls(), 4))