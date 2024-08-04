def bouncing_balls():
    h = float(input())
    h_after_first_bounce = float(input())
    bounciness_index = h_after_first_bounce / h

    num_bounces = int(input())

    total_distance = 0
    for i in range(1, num_bounces + 1):
        h_after_last_bounce = h * (bounciness_index**i)
        total_distance += 2 * h_after_last_bounce

    print(f"{total_distance:.4f}")