def calculate_distance(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = start_height + first_bounce_height
    for _ in range(num_bounces - 1):
        total_distance += 2 * first_bounce_height
        first_bounce_height *= bounciness_index
        total_distance += first_bounce_height
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_distance(start_height, first_bounce_height, num_bounces)
print(result)