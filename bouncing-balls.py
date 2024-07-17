def calculate_bouncing_index(start_height, first_bounce):
    return start_height / (start_height - first_bounce)


def calculate_total_distance(start_height, first_bounce, num_bounces):
    bouncing_index = calculate_bouncing_index(start_height, first_bounce)
    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += 2 * (current_height - (1 - bouncing_index) * current_height)
        current_height *= 1 - bouncing_index
    return round(total_distance, 4)


start_height = float(input())
first_bounce = float(input())
num_bounces = int(input())

total_distance = calculate_total_distance(start_height, first_bounce, num_bounces)

print(total_distance)