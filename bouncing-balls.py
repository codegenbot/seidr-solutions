def bouncing_balls():
    start_height = float(input())
    bounciness_index = (float(input()) / start_height)
    num_bounces = int(input())

    first_bounce_height = start_height * (1 - bounciness_index)

    total_distance = 0
    for i in range(1, num_bounces + 1):
        new_height = first_bounce_height * (1 - bounciness_index)
        total_distance += 2 * start_height + 2 * new_height
        first_bounce_height = new_height

    print(total_distance)