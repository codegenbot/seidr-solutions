def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    distance = 0
    for _ in range(int(input())):
        distance += bounciness_index * (h0 + hf) / 2
        h0, hf = hf, hf * bounciness_index
    return round(distance, 5)


print(bouncing_balls())