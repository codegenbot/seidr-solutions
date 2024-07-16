```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for _ in range(num_bounces):
        if _ == 0:
            total_distance += start_height * (1 + 2**0.5)
        else:
            total_distance += start_height * (1 - bounciness_index) * (1 + 2**0.5)
        start_height = start_height * abs(1 - bounciness_index)

    print(f"{total_distance:.4f}")


bouncing_balls()