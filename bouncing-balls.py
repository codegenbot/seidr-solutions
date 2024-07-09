```
def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    distance = 0
    height = hb
    for _ in range(n):
        distance += 2 * height
        height *= bi
    print(bi)
    print(distance)


bouncing_balls()