def calculate_bounciness_index(start_height, height_after_first_bounce):
    return height_after_first_bounce / start_height


def calculate_total_distance(start_height, bounciness_index, num_bounces):
    total_distance = 0
    current_height = start_height
    for _ in range(num_bounces):
        total_distance += abs(current_height - start_height)
        current_height *= bounciness_index
    return round(total_distance, 5)


start_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

bounciness_index = calculate_bounciness_index(start_height, height_after_first_bounce)
total_distance = calculate_total_distance(start_height, bounciness_index, num_bounces)

print(f"{total_distance:.4f}")