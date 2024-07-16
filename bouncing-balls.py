```python
import math

def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounces = int(input())

    bi = hf / h0

    total_distance = 2 * (1 - math.pow(bi, 2)) ** bounces
    print(total_distance)

bouncing_balls()