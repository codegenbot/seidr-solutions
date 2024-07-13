def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    height = start_height
    for _ in range(num_bounces):
        total_distance += abs(height)
        bounciness_index = height / start_height
        height /= 2

    return str(bounciness_index) + "\n" + str(total_distance)


print(bouncing_balls())