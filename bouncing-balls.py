def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = 0.0
    height = hf
    for _ in range(num_bounces):
        total_distance += height
        height *= bounciness_index
    print(round(total_distance, 4))


bouncing_balls()