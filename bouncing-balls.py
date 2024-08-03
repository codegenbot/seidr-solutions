def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b = int(input())

    bounciness_index = hf / h0
    total_distance = 2 * (1 + bounciness_index) ** b - 2

    return str(total_distance)


print(bouncing_balls())