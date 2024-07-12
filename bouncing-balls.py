def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = 1.0
    total_distance = 0
    max_height = start_height + first_bounce_height

    for i in range(num_bounces):
        new_height = 2 * max_height - start_height
        total_distance += abs(new_height)
        max_height = new_height
        bounciness_index *= (new_height / max_height)

    return str(bounciness_index) + "\n" + str(total_distance)

print(bouncing_balls())