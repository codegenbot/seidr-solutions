def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5

    total_distance = 0
    height = start_height * (bounciness_index**2)
    for _ in range(bounces):
        total_distance += height
        height *= bounciness_index**2

    print(format(total_distance, ".4f"))


bouncing_balls()