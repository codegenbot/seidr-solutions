def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    num_bounces = int(input())
    total_distance = (2 * h0) * (
        (1 - math.pow(bounciness_index, -num_bounces)) / (1 - bounciness_index)
    )
    print(format(total_distance, ".6f"))


bouncing_balls()