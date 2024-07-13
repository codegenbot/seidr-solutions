def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    distance = 2 * (1 - math.pow(bounciness_index, -1))

    print(f"{distance:.4f}")