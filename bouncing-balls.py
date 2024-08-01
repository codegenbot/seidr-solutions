def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = 0
    for i in range(num_bounces):
        total_distance += 2 * (h2 - h1)
        h1, h2 = h2, h1 * bounciness_index

    print("{:.3f}".format(total_distance))


bouncing_balls()