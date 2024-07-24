def calculate_bounciness(starting_height, first_bounce_height):
    bounciness_index = first_bounce_height / starting_height
    return bounciness_index


def calculate_total_distance(bounciness_index, num_of_bounces):
    total_distance = 0
    for _ in range(num_of_bounces):
        total_distance += 2 * (1 - math.pow(1 - bounciness_index, 2))
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bounciness_index = calculate_bounciness(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_of_bounces)

print(f"{total_distance:.4f}")