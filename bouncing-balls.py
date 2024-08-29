def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    n_bounces = int(input())
    distance = 0
    height = f_height
    for _ in range(n_bounces):
        distance += height * 2
        height *= bounciness_index
    return round(distance, 5)


print(bouncing_balls())