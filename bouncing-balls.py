def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_of_bounces = int(input())
    total_distance = (2 * s_height) + (
        (bounciness_index**2 - 1) / (bounciness_index - 1)
    ) * (num_of_bounces**2)
    print(total_distance)


bouncing_balls()