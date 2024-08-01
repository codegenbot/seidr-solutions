def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    height = hf
    for _ in range(int(input())):
        total_distance += 2 * (height + h0)
        height *= bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())