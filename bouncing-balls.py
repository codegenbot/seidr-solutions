def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    distance = 0

    for _ in range(num_bounces):
        distance += math.log2(bounciness_index)
        bounciness_index *= 1 - (1 - bounciness_index) ** 2

    return round(distance, 3)


print(bouncing_balls())