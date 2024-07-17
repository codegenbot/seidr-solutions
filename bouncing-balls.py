def calculate_bouncing_index(start_height, first_bounce_height):
    bounciness_index = first_bounce_height / start_height
    return round(bounciness_index, 3)


def calculate_total_distance(num_bounces, bounciness_index):
    total_distance = ((1 + bounciness_index) ** num_bounces - 1) * 2
    return round(total_distance, 6)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bouncing_index = calculate_bouncing_index(start_height, first_bounce_height)
total_distance = calculate_total_distance(num_bounces, bouncing_index)

print(bouncing_index)
print(total_distance)