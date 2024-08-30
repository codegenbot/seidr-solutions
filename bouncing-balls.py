def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = 2 * (1 - math.pow(bounciness_index, -n)) * h0
    return round(total_distance, 5)


print(bouncing_balls())