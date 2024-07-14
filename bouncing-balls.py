def bouncing_balls():
    h0 = float(input())
    hf = float(input())
    bounciness_index = hf / h0

    n = int(input())
    total_distance = 2 * (1 + bounciness_index) ** n - 2
    print(total_distance)


bouncing_balls()