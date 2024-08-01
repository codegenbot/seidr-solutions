def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = (2**n) * ((h0 + hf) / 2)
    return "{:.6f}\n{}".format(bounciness_index, int(total_distance))


print(bouncing_balls())