def calculate_total_distance(starting_height, height_first_bounce, num_bounces):
    bounciness_index = height_first_bounce / starting_height
    total_distance = starting_height + 2 * height_first_bounce * (
        1 - bounciness_index**num_bounces
    ) / (1 - bounciness_index)
    return total_distance


starting_height = float(input())
height_first_bounce = float(input())
num_bounces = int(input())
result = calculate_total_distance(starting_height, height_first_bounce, num_bounces)
print(result)