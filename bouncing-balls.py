def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    for _ in range(int(input())):
        total_distance += (h0 + hf) * 2
        h0, hf = hf, hf * bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())