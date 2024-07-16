def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    current_height = f_height

    for _ in range(bounces):
        total_distance += abs(current_height - s_height) * 2
        current_height *= bounciness_index

    print(total_distance + abs(s_height))


bouncing_balls()