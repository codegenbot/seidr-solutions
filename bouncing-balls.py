def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    k = h2 / h1
    num_of_bounces = int(input())
    total_distance = ((h1 * (k ** (num_of_bounces + 1) - 1)) / (k - 1))
    print("%.3f" % total_distance)

bouncing_balls()