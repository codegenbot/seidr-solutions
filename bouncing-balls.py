def bouncing_balls():
    start_height = float(input())
    bounciness_index = (float(input()) / start_height)
    num_bounces = int(input())

    first_bounce_height = (1 - bounciness_index) * start_height

    total_distance = 0
    for i in range(1, num_bounces + 1):
        total_distance += 2 * ((start_height + first_bounce_height) * (2 ** (i - 1)) - start_height)
    print(total_distance)