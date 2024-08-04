def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    distance = 0
    height = f_height
    for _ in range(int(input())):
        distance += height
        height *= bounciness_index
    return round(distance, 5)


print(round(bouncing_balls(), 5))