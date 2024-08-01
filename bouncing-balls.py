def calculate_bouncing_index(start_height, first_bounce):
    return first_bounce / start_height


def calculate_total_distance(bounciness_index, num_bounces):
    return (1 + bounciness_index) ** num_bounces - 1


start_height = float(input())
first_bounce = float(input())
num_bounces = int(input())

bouncing_index = calculate_bouncing_index(start_height, first_bounce)
total_distance = calculate_total_distance(bouncing_index, num_bounces)

print(total_distance)