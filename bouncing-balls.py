```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        bounciness_index = current_height / start_height
        current_height *= 0.5 * bounciness_index
        if _ % 2 == 0:
            total_distance += 2 * abs(current_height)
        else:
            total_distance += 4 * abs(current_height)
    print(total_distance)
    print(bounciness_index)

bouncing_balls()