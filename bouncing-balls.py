def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    height = hf
    for _ in range(int(input())):
        total_distance += 2 * (height + hf)
        height *= bounciness_index

    return str(round(total_distance, 4))


print(bouncing_balls())