def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    height = hf
    for _ in range(int(input())):
        height *= bounciness_index
        total_distance += 2 * height

    return str(total_distance)


print(bouncing_balls())