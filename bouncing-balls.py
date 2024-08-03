def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (i + 1) - 1
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(calculate_total_distance(start_height, first_bounce_height, num_bounces))