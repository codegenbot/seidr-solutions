def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b_index = hf / h0

    n = int(input())

    total_distance = 2 * (1 - math.pow(b_index, -n)) / (1 + b_index) * h0

    print(f"{total_distance:.6f}")


bouncing_balls()