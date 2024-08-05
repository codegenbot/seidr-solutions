def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    distance = 0
    for i in range(n):
        distance += (h + bi) * 2**i
        if i > 0:
            h *= bi
    return str(round(distance, 4))


print(bouncing_balls())