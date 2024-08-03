def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())

    total_distance = 2 * (1 - math.pow(hf / h0, 2)) * num_bounces

    print(total_distance)


bouncing_balls()