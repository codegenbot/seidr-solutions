def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    num_bounces = int(input())

    bounciness_index = f_height / s_height

    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (s_height + f_height) * 2
        s_height, f_height = f_height, f_height - (f_height - s_height)

    print(round(bounciness_index, 4))
    print(int(total_distance))


bouncing_balls()