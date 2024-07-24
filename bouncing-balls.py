def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height

    n_bounces = int(input())

    total_distance = 0
    for _ in range(n_bounces):
        total_distance += 2 * (s_height + f_height)
        s_height, f_height = f_height, f_height - (
            (f_height - s_height) / bounciness_index
        )

    print(f"{total_distance:.4f}")


bouncing_balls()