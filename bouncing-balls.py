def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = (
        (h0 + hf)
        * 2
        * (1 - math.pow(bounciness_index, -(n + 1)))
        / (1 - bounciness_index)
    )
    return total_distance


print(round(bouncing_balls(), 4))