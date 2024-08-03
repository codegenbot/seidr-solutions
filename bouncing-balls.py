def calculate_total_distance():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())
    total_distance = (1 - math.pow(bounciness_index, -num_bounces)) * 2 * start_height
    return round(total_distance, 5)


print(calculate_total_distance())