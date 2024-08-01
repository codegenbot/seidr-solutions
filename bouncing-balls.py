def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / starting_height
    num_bounces = int(input())

    total_distance = 0
    for i in range(num_bounces):
        total_distance += 2 * (
            starting_height - ((1 - bounciness_index) ** (i + 1)) * starting_height
        )

    return round(total_distance, 5)


print(bouncing_balls())