def calculate_bouncing_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += bounciness_index + 1
    return round(total_distance, 6)


starting_height = float(input().strip())
first_bounce_height = float(input().strip())
num_bounces = int(input().strip())

bouncing_index = calculate_bouncing_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bouncing_index, num_bounces)

print(f"{total_distance:.6f}")