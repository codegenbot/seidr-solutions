def bouncing_balls():
    h1 = float(input())
    h2 = float(input())
    bounciness_index = h2 / h1
    num_bounces = int(input())
    total_distance = (h2 - h1) * 2 + (
        (bounciness_index**num_bounces - 1) / (bounciness_index - 1)
    )
    print(format(total_distance, ".4f"))


bouncing_balls()