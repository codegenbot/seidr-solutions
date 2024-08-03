def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def total_distance_after_n_bounces(bounciness_index, n):
    distance = 0
    height = starting_height
    for _ in range(n):
        distance += 2 * height
        height *= bounciness_index
    return distance


starting_height = float(input())
first_bounce_height = float(input())
n = int(input())

bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
print(f"{total_distance_after_n_bounces(bounciness_index, n):.4f}")