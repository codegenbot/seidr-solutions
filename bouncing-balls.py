def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    total_distance = 0.0
    for _ in range(int(input())):
        total_distance += 2 * h0 * (1 - math.pow(bounciness_index, -1))
        h0 *= bounciness_index
    return str(total_distance)


print(bouncing_balls())