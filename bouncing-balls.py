def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
    total_distance = starting_height
    total_distance += first_bounce_height
    total_distance += first_bounce_height * (1 - bounciness_index**num_bounces) / (1 - bounciness_index)
    
    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)