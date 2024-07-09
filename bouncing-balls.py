```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(1, num_bounces + 1):
        start_height *= bounciness_index**0.5
        total_distance += 2 * start_height

    print(total_distance * 2)