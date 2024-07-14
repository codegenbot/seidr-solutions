def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    current_height = s_height
    for _ in range(bounces):
        if current_height > 0:
            total_distance += 2 * math.sqrt(2 * current_height)
            current_height *= bounciness_index
        else:
            break

    return round(total_distance, 4)


print(round(bouncing_balls(), 4))