def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    distance = 0
    height = start_height

    for _ in range(bounces):
        distance += height
        height *= bounciness_index

    print(format(distance, ".4f"))


bouncing_balls()