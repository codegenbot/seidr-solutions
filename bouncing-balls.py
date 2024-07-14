def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    b_index = hf / h0
    n = int(input())

    total_distance = 2 * (1 + b_index) ** n - 2
    return str(round(total_distance, 4))


print(bouncing_balls())