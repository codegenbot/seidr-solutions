def calculate_bounciness_index(starting_height, height_after_first_bounce):
    return height_after_first_bounce / starting_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    current_height = 1.0
    for _ in range(num_bounces):
        total_distance += 2 * current_height
        current_height *= bounciness_index
    return total_distance


starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = calculate_bounciness_index(
    starting_height, height_after_first_bounce
)

total_distance = calculate_total_distance(bounciness_index, num_bounces)
print(f"{total_distance:.4f}")