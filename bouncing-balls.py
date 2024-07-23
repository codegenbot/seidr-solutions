def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    height = 1  # Start from the first bounce height which is 75% of the original height
    for _ in range(num_bounces):
        total_distance += abs(height * starting_height)
        height *= bounciness_index
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_bounces)

print(f"{total_distance:.4f}")