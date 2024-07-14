def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = 2 * (1 - math.pow(bounciness_index, 2)) * n
    return str(total_distance)


print(bouncing_balls())