def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    total_distance = 0
    height = hf
    for _ in range(int(input())):
        total_distance += 2 * height
        height *= bounciness_index

    return format(total_distance, ".4f")


print(bouncing_balls())