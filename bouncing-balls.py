def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = 0
    height = h2
    for _ in range(num_bounces):
        total_distance += 2 * (h2 - height)
        height /= bounciness_index

    print(format(bounciness_index, ".3f"))
    print(format(total_distance + 2 * h1, ".6f"))


bouncing_balls()