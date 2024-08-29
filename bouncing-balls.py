def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    for _ in range(int(input())):
        total_distance += math.log2(bounciness_index)

    print(format(total_distance, ".4f"))


bouncing_balls()