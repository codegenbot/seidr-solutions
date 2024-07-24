def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces - 1):
        current_height /= bounciness_index
        total_distance += abs(starting_height - current_height)
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_distance(starting_height, first_bounce_height, num_bounces)

print(result)