def calculate_distance(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces - 1):
        current_height *= bounciness_index
        total_distance += current_height
    return round(total_distance, 6)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(calculate_distance(start_height, first_bounce_height, num_bounces))