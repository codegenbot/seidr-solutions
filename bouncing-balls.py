def bouncing_balls():
    s = input().split()
    start_height = float(s[0])
    first_bounce_height = float(s[1])
    num_bounces = int(s[2])

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        total_distance += bounciness_index * (start_height + first_bounce_height) / 2
        start_height, first_bounce_height = (
            first_bounce_height,
            start_height * bounciness_index,
        )

    print(format(total_distance, ".4f"))


bouncing_balls()