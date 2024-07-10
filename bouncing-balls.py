def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    distance = 0
    for _ in range(num_bounces):
        distance += start_height * (1 - math.pow(bounciness_index, _ + 1))

    print(round(distance, 4))


bouncing_balls()