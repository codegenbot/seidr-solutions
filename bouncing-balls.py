```
def calculate_bouncing_index(start_height, first_bounce_height):
    return first_bounce_height / start_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    height = 1.0  # Start at 1 meter high
    for _ in range(num_bounces):
        height *= bounciness_index
        total_distance += (1 + height) / 2  # Consider the effect of gravity on each bounce height
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bouncing_index = calculate_bouncing_index(start_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_bounces)

print(f"{total_distance:.4f}")