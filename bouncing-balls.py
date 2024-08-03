def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    dist = 0
    for _ in range(n):
        h *= bi
        if h > 1:
            dist += 2
        elif h < 1:
            dist += 4
        else:
            break
    return round(dist, 3)


print(bouncing_balls())