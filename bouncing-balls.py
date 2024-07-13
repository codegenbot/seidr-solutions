```
def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h
    n = int(input())
    total_distance = 0
    for _ in range(n):
        total_distance += (2 * h + hb) * bounciness_index
        h, hb = hb, (hb - h) * bounciness_index
    return round(total_distance, 4)

print(bouncing_balls())