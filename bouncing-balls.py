def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = (2*first_bounce_height) / (start_height + start_height)

    total_distance = 0
    for i in range(bounces):
        if i == 0:
            height = start_height
        else:
            height = first_bounce_height * (bounciness_index ** (i))
        distance = 2*(height - start_height)
        total_distance += distance

    print(format(total_distance, ".4f"))


bouncing_balls()