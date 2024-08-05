def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    for _ in range(int(input())):
        distance += 2 * math.sqrt(h0 * hf)
        h0, hf = hf, (hf + h0) / 2

    print(bounciness_index)
    print(distance)


bouncing_balls()