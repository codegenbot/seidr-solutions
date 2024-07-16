def bouncing_balls():
    h = float(input())
    bh = float(input())
    bounciness_index = bh / h

    total_distance = 0
    for _ in range(int(input())):
        height_diff = abs(h - bh)
        total_distance += height_diff * bounciness_index
        h = bh
        bh *= bounciness_index

    return round(total_distance, 6)


print(bouncing_balls())