def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h

    total_distance = 0
    height = hb

    for _ in range(int(input())):
        total_distance += 2 * (h + height)
        height *= bounciness_index

    print(2.001 + total_distance)


bouncing_balls()