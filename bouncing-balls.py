def calculate_total_distance(starting_height, height_after_first_bounce, num_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = starting_height + height_after_first_bounce
    for _ in range(num_bounces - 1):
        total_distance += 2 * height_after_first_bounce
        height_after_first_bounce *= bounciness_index
    return total_distance

starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, height_after_first_bounce, num_bounces)
print(result)