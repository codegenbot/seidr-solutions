def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height
    remaining_bounces = num_bounces - 1

    if remaining_bounces > 0:
        total_distance += 2 * first_bounce_height * (1 + bounciness_index) * (bounciness_index**(remaining_bounces - 1))

    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)