def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h
    total_distance = 0
    for _ in range(int(input())):
        total_distance += (h + hb) * 2
        h, hb = hb, abs(hb - h)
    return "{:.3f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())