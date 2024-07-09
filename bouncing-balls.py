def bouncing_balls():
    s_height = float(input())
    f_height = float(input())
    bounciness_index = f_height / s_height
    num_bounces = int(input())
    total_distance = (
        (2**0.5) * bounciness_index * (1 - bounciness_index ** (2 * num_bounces))
    )
    print(format(total_distance, ".4f"))


bouncing_balls()