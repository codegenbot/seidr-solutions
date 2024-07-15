def calculate_total_distance(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = start_height + first_bounce_height
    total_distance += (
        first_bounce_height
        * (bounciness_index**num_bounces - 1)
        / (bounciness_index - 1)
    )
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())
print(calculate_total_distance(start_height, first_bounce_height, num_bounces))