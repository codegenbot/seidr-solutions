from decimal import Decimal

def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = Decimal(first_bounce_height) / Decimal(starting_height)
    total_distance = Decimal(starting_height) + 2 * Decimal(first_bounce_height)
    for _ in range(2, num_bounces + 1):
        first_bounce_height *= bounciness_index
        total_distance += 2 * first_bounce_height
    return total_distance

starting_height = Decimal(input())
first_bounce_height = Decimal(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)