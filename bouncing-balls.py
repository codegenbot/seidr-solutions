def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height

    for _ in range(1, num_bounces):
        next_bounce_height = first_bounce_height * (bounciness_index ** 2)
        total_distance += next_bounce_height * 2
        first_bounce_height = next_bounce_height
        bounciness_index = next_bounce_height / starting_height

    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)