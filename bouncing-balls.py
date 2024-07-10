```
import math

def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = 0
    prev_height = h1  
    for _ in range(num_bounces):
        total_distance += abs(h2 - prev_height) * 2
        prev_height, h2 = h2, bounciness_index * prev_height  
    return round(total_distance, 4)

print(round(bouncing_balls(), 4))