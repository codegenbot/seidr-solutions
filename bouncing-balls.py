def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = (2 ** (num_bounces + 1) - 1) * h0 * bounciness_index
    print(format(total_distance, ".4f"))


bouncing_balls()