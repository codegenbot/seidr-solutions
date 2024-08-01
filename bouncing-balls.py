def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    n = int(input())
    total_distance = 0
    current_height = h2
    for _ in range(n):
        total_distance += 2 * (h2 - (h2 / h1) ** (_ + 1))
        current_height = int(current_height * ((h2 / h1) ** (_ + 1)))

    print(bounciness_index)
    print(total_distance)


bouncing_balls()