def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = 2 * (1 + bounciness_index) ** num_bounces - 2
    print("{:.3f}".format(total_distance))


bouncing_balls()