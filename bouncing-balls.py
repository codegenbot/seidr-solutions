def calculate_bouncing_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, number_of_bounces):
    total_distance = 0
    height = starting_height
    for _ in range(number_of_bounces):
        height *= bounciness_index
        total_distance += height
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
number_of_bounces = int(input())

bouncing_index = calculate_bouncing_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bouncing_index, number_of_bounces)

print("{:.3f}".format(total_distance))