from decimal import Decimal


def calculate_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = Decimal(first_bounce_height) / Decimal(starting_height)
    total_distance = Decimal(starting_height) + 2 * Decimal(first_bounce_height) * (
        1 - bounciness_index**num_bounces
    ) / (1 - bounciness_index)
    return total_distance


starting_height = Decimal(input())
first_bounce_height = Decimal(input())
num_bounces = int(input())

result = calculate_distance(starting_height, first_bounce_height, num_bounces)
print(result)