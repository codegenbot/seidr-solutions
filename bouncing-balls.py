```
def bouncing_balls():
    h = float(input())
    bh = float(input())
    bi = bh / h
    bounces = int(input())
    distance = 0
    height = bh
    for _ in range(bounces):
        distance += (height * 2) + height
        height *= bi
    return round(distance, 5)

print(bouncing_balls())