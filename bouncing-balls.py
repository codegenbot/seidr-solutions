def bouncing_balls():
    start_height = float(input())
    first_bounce_height = (2 / 3) * start_height
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(1, num_bounces + 1):
        total_distance += 2 * ((first_bounce_height * (2 ** (i - 1))) - start_height)
    print(total_distance)