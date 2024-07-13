def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = (
        starting_height
        + first_bounce_height
        + 2
        * first_bounce_height
        * sum([bounciness_index**i for i in range(1, num_bounces)])
    )
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(starting_height, first_bounce_height, num_bounces))