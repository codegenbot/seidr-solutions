def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    for _ in range(int(input())):
        distance += (2 * h0 + hf) * bounciness_index
        h0, hf = hf, hf - h0

    print(format(distance, ".4f"))


bouncing_balls()