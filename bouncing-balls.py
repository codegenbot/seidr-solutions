def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    for _ in range(num_bounces - 1):
        bounce_height = first_bounce_height * bounciness_index
        total_distance += 2 * bounce_height
        first_bounce_height = bounce_height
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(starting_height, first_bounce_height, num_bounces))