def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_of_bounces = int(input())
    total_distance = ((bounciness_index + 1) ** num_of_bounces - 1) * h1
    print("%.3f" % total_distance)


bouncing_balls()