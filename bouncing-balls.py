def calculate_bounciness(starting_height, height_after_first_bounce):
    bounciness_index = height_after_first_bounce / starting_height
    return bounciness_index


def calculate_total_distance(bounciness_index, num_of_bounces):
    total_distance = 0
    for _ in range(num_of_bounces):
        total_distance += 2 * (1 - math.pow(bounciness_index, -1))
    return total_distance


starting_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

bounciness_index = calculate_bounciness(starting_height, height_after_first_bounce)
total_distance = calculate_total_distance(bounciness_index, num_of_bounces)

print("%.3f" % total_distance)