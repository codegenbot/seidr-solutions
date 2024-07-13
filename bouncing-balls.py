def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())
    total_distance = (1 + 2**0.5) ** num_bounces / (1 - bounciness_index)
    return str.format("%.6f", total_distance)


print(bouncing_balls())