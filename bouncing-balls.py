def bouncing_balls():
    h = float(input())
    hb = float(input())
    bounciness_index = hb / h
    num_bounces = int(input())
    total_distance = 0
    height = hb
    for _ in range(num_bounces):
        total_distance += 2 * (height - height**0.5)
        height *= bounciness_index
    print(total_distance)


bouncing_balls()