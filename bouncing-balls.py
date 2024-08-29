def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    distance = 2 * (1 - math.pow(bounciness_index, -num_bounces)) * h0
    return round(distance, 5)


print(round(bouncing_balls(), 5))