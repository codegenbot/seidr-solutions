def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h
    total_distance = (h + hb) * bounciness_index**2
    for _ in range(int(input()) - 1):
        h, hb = hb, (hb + h) * bounciness_index - h
    return round((h + hb) * bounciness_index**2, 5)


print(bouncing_balls())