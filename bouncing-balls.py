def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = 0
    for i in range(1, num_bounces + 1):
        total_distance += (h2**i) * math.sqrt(h1 + h2)

    print(bounciness_index)
    print(total_distance)


bouncing_balls()