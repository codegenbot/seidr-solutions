def bouncing_balls():
    h = float(input())
    bh = float(input())
    b = int(input())

    bi = bh / h

    total_distance = 0
    for _ in range(b):
        total_distance += bi * 2
        h, bh = bh, h - (h - bh)
        bi = bh / h

    return str(round(total_distance, 4))


print(bouncing_balls())