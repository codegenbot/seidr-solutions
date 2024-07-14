def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    n = int(input())
    total_distance = 0
    height = h2
    for _ in range(n):
        total_distance += 2 * (height - 0.5)
        height *= bounciness_index
    print(format(total_distance, ".4f"))


bouncing_balls()