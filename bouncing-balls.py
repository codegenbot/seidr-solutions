def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + (
        starting_height + first_bounce_height
    ) * bounciness_index * (1 - bounciness_index**num_bounces) / (
        1 - bounciness_index
    )
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(starting_height, first_bounce_height, num_bounces))