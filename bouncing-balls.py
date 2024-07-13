```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5
    total_distance = 0

    for _ in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height = start_height * (1 - 0.5) + start_height * 0.5 * bounciness_index
        total_distance += abs(first_bounce_height - start_height)
    print(total_distance)
    print(bounciness_index)