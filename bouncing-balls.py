```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for bounce_number in range(num_bounces):
        current_height = abs(start_height * (0.5 ** ((bounce_number + 1) // 2)) * bounciness_index)
        if bounce_number < num_bounces - 1:
            total_distance += 2 * current_height
        else:
            total_distance += 2 * current_height

    print(total_distance)
    print(bounciness_index)

bouncing_balls()