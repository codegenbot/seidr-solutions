def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height
    for _ in range(bounces):
        total_distance += 2 * height
        height *= bounciness_index
    print(format(total_distance, ".6f"))


bouncing_balls()