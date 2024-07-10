```
import math

def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += h2
        h1 = h2 / bounciness_index
        h2 = h2 * bounciness_index if _ < num_bounces - 1 else 0
    return round(total_distance, 4)

print(round(bouncing_balls(), 4))