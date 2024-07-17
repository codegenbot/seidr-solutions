def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1

    num_bounces = int(input())

    total_distance = 0
    height = h2
    while num_bounces > 0:
        total_distance += height
        height *= bounciness_index
        num_bounces -= 1

    print(total_distance)


bouncing_balls()