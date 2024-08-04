def calculate_bounciness(start_height, first_bounce):
    return first_bounce / start_height


def calculate_total_distance(bounces, bounciness_index):
    total_distance = 0
    height = start_height
    for _ in range(bounces):
        total_distance += 2 * (height + height * bounciness_index)
        height *= bounciness_index
    return total_distance


start_height = float(input())
first_bounce = float(input())
bounces = int(input())

bounciness = calculate_bounciness(start_height, first_bounce)
print(bounciness)

total_distance = calculate_total_distance(bounces, bounciness)
print(total_distance)