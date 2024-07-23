def calculate_total_distance(
    starting_height, height_after_first_bounce, num_of_bounces
):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = starting_height + 2 * height_after_first_bounce * (
        1 - bounciness_index**num_of_bounces
    ) / (1 - bounciness_index)
    return total_distance


starting_height = float(input())
height_after_first_bounce = float(input())
num_of_bounces = int(input())

result = calculate_total_distance(
    starting_height, height_after_first_bounce, num_of_bounces
)
print(result)