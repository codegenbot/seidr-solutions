def calculate_total_distance(
    starting_height, height_after_first_bounce, number_of_bounces
):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = 0
    current_height = height_after_first_bounce
    for _ in range(number_of_bounces - 1):
        current_height *= bounciness_index
        total_distance += current_height
    return round(total_distance, 5)


starting_height = float(input())
height_after_first_bounce = float(input())
number_of_bounces = int(input())

print(
    calculate_total_distance(
        starting_height, height_after_first_bounce, number_of_bounces
    )
)