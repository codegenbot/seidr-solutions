```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += (current_height - start_height) * (2 ** (1 - bounciness_index))
        current_height *= 2 ** (-bounciness_index + 1)

    print(total_distance)