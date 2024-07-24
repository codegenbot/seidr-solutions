def bouncing_balls():
    h = float(input())
    hb = float(input())
    b = int(input())

    bi = hb / h

    distance = 0
    for _ in range(b):
        distance += (h + hb) * 2
        h, hb = hb, abs(h - hb)

    return f"{distance:.4f}"


print(bouncing_balls())