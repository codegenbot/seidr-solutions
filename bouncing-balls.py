def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = (1 + 2**0.5) ** (num_bounces * math.log(bounciness_index, 2)) - (
        1 - 2**-0.5
    ) ** (-num_bounces * math.log(1 - bounciness_index, 2))
    return round(total_distance, 4)


print(round(bouncing_balls(), 4))