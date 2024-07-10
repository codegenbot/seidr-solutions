def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = (h2 - h1) * 2 * (1 + bounciness_index**2) ** (num_bounces / 2)
    print("{:.3f}".format(total_distance))


bouncing_balls()