def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())
    total_distance = 0
    for _ in range(num_bounces):
        s_height = f_height
        f_height /= bounciness_index
        total_distance += s_height + f_height
    print(format(total_distance, ".4f"))


bouncing_balls()