def bouncing_balls():
    h = float(input())
    bh = float(input())
    bounciness_index = bh / h
    bounces = int(input())
    total_distance = (2 * (1 + bounciness_index)) ** bounces - 1
    print(total_distance)


bouncing_balls()