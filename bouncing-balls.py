def calculate_bouncing_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    current_height = 1
    for _ in range(num_bounces):
        total_distance += abs(current_height - 1)
        current_height *= bounciness_index
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bouncing_index = calculate_bouncing_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bouncing_index, num_bounces)

print(f"{total_distance:.4f}")