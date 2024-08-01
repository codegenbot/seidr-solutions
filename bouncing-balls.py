def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    distance = (2 * h0) + ((num_bounces - 1) * (h0 - hf))
    print(f"{distance:.4f}")


bouncing_balls()