def bouncing_balls():
    h0 = float(input())  # starting height
    hf = float(input())  # height after first bounce
    bounciness_index = hf / h0
    n = int(input())  # number of bounces

    total_distance = 2 * (1 - math.pow(bounciness_index, -n)) * h0
    print("{:.3f}".format(total_distance))


bouncing_balls()