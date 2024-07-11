def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    for _ in range(2, num_bounces + 1):
        first_bounce_height *= bounciness_index
        total_distance += first_bounce_height * (1 + 2 + 2 * bounciness_index + 4 * bounciness_index ** 2)
    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(starting_height, first_bounce_height, num_bounces))