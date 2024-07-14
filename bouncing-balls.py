def calculate_bouncing_index(start_height, first_bounce_height):
    return first_bounce_height / start_height


def calculate_total_distance(start_height, bouncing_index, num_of_bounces):
    total_distance = 0
    height = start_height
    for _ in range(num_of_bounces):
        total_distance += height
        height *= bouncing_index
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bouncing_index = calculate_bouncing_index(start_height, first_bounce_height)
total_distance = calculate_total_distance(start_height, bouncing_index, num_of_bounces)

print(total_distance)