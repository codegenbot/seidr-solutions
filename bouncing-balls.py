def calculate_distance(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = start_height * (1 + bounciness_index) ** num_bounces
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_distance(start_height, first_bounce_height, num_bounces)
print(result)