def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    distance = 0
    for _ in range(int(input())):
        distance += (s_height + f_height) * 2
        s_height, f_height = f_height, s_height * f_height / s_height
    return str(round(distance, 4))


print(bouncing_balls())