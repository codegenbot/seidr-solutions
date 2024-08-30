def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    n = int(input())

    bounciness_index = h2 / (2 * h1)

    total_distance = 0
    current_height = h1
    for _ in range(n):
        total_distance += 2 * current_height
        current_height *= bounciness_index

    print(format(total_distance, ".4f"))


bouncing_balls()