```
    
import math

def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = abs(h2 - h1) * 2  # initial drop
    prev_height = h2
    for _ in range(num_bounces):
        total_distance += abs(prev_height - h2) * 2
        prev_height, h2 = h2, round(h2 * bounciness_index, 4)
    return round(total_distance, 4)

print(round(bouncing_balls(), 4))