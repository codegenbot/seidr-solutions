def calculate_bounciness(start_height, first_bounce_height):
    return first_bounce_height / start_height

def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += (bounciness_index - 1) * 2 + 1
    return total_distance

start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = calculate_bounciness(start_height, first_bounce_height)
print(bounciness_index)

total_distance = calculate_total_distance(bounciness_index, num_bounces)
print(total_distance)