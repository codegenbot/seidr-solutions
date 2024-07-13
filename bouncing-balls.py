def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
    return starting_height + 2 * sum(
        bounciness_index**i for i in range(1, num_bounces + 1)
    )


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(calculate_total_distance(starting_height, first_bounce_height, num_bounces))