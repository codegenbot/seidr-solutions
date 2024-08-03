def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = (1 + 2**0.5) * (bounciness_index**num_bounces - 1)
    return "{:.6f}\n".format(total_distance)


print(bouncing_balls())