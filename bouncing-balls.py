```
import math
def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    total_distance = 0
    for _ in range(n):
        total_distance += 2 * math.sqrt(hb) * bi
        hb /= bi
    return round(total_distance, 4)


print(bouncing_balls())