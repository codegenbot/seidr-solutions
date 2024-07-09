def calculate_bouncing_distance():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height

    total_distance = 0
    height = starting_height
    for _ in range(int(input())):
        total_distance += abs(height - (height * bounciness_index))
        height *= bounciness_index

    return "{:.6f}".format(total_distance)


print(calculate_bouncing_distance())