def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = first_bounce_height
    for _ in range(int(input())):
        total_distance += 2 * (start_height + height - first_bounce_height)
        height /= bounciness_index

    return round(total_distance, 5)


print(bouncing_balls())