def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    total_distance = 2 * (1 - math.pow(bounciness_index, 2)) ** 1000
    print(f"{total_distance:.6f}")


bouncing_balls()