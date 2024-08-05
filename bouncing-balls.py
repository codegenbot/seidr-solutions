def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0
    n = int(input())
    total_distance = (2**0.5) * (1 - (h0 / hf)) ** n * h0
    print("{:.3f}".format(total_distance))


bouncing_balls()