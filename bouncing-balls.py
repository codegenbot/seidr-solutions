def calculate_bounciness_index(starting_height, height_after_first_bounce):
    return height_after_first_bounce / starting_height


def calculate_total_distance(starting_height, height_after_first_bounce, num_bounces):
    bounciness_index = calculate_bounciness_index(
        starting_height, height_after_first_bounce
    )
    total_distance = starting_height + (starting_height + height_after_first_bounce) * (
        1 + bounciness_index
    ) * (num_bounces - 1)
    return total_distance


starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

print(calculate_total_distance(starting_height, height_after_first_bounce, num_bounces))