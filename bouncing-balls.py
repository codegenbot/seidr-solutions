def calculate_distance(starting_height, height_after_first_bounce, num_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = 0
    for _ in range(
        num_bounces - 1
    ):  # subtract one because we already calculated the first bounce
        height_after_last_bounce = height_after_first_bounce * (bounciness_index**2)
        total_distance += 2 * (starting_height + height_after_last_bounce)
        starting_height, height_after_first_bounce = (
            height_after_last_bounce,
            height_after_last_bounce,
        )
    return round(2 * (starting_height + height_after_first_bounce) + 0.5, 4)


start_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

print(calculate_distance(start_height, height_after_first_bounce, num_bounces))