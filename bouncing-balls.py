def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    for _ in range(int(input())):
        distance += (2 * h0 + hf) * bounciness_index
        h0, hf = hf, 2 * hf - h0

    return format(distance, ".4f")


print(bouncing_balls())