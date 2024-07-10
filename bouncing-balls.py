def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (
        (first_bounce_height / start_height)
        if start_height != 0
        else "error: cannot divide by zero"
    )

    num_bounces = int(input())

    total_distance = 2 * (1 + bounciness_index**num_bounces)

    print(f"{total_distance:.4f}")


bouncing_balls()