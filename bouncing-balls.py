def bouncing_balls():
    h = float(input())
    b = float(input())
    i = b / h

    n = int(input())

    total_distance = 0
    height = b

    for _ in range(n):
        total_distance += 2 * (h + height)
        height *= i

    print("%.3f" % total_distance)


bouncing_balls()