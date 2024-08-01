def bouncing_balls():
    h = float(input())
    hb = float(input())
    bi = hb / h
    n = int(input())
    distance = 0
    for _ in range(n):
        distance += (h + hb) * 2
        temp = hb
        hb = math.sqrt(hb * (2 - hb) * h)
        if hb < 1e-6:
            break
        h = temp
    return round(distance, 4)


print(round(bouncing_balls(), 4))