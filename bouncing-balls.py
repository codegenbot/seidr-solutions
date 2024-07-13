def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 0
    height = hf
    for _ in range(int(input())):
        distance += 2 * math.sqrt(2 * height)
        height *= bounciness_index

    return f"{distance:.4f}"


print(bouncing_balls())