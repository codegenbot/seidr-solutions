def bouncing_balls():
    h = float(input())
    hb = float(input())
    b = int(input())

    bounciness_index = hb / h
    total_distance = 0

    for _ in range(b):
        total_distance += (h + hb) * 2
        h, hb = hb, abs(hb - h)

    print(total_distance)


bouncing_balls()