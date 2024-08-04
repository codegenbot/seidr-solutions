def calculate_bouncing_index(start_height, first_bounce_height):
    return first_bounce_height / start_height


def calculate_total_distance(start_height, first_bounce_height, num_bounces):
    bouncing_index = calculate_bouncing_index(start_height, first_bounce_height)
    total_distance = 0
    for _ in range(num_bounces):
        start_height = first_bounce_height
        first_bounce_height *= bouncing_index
        total_distance += start_height - first_bounce_height
    return round(total_distance, 6)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(calculate_total_distance(start_height, first_bounce_height, num_bounces))