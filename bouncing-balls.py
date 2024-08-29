def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_of_bounces):
    total_distance = 0
    height = float(input("Enter the starting height: "))
    for _ in range(num_of_bounces):
        distance = 2 * height + 2 * (height * bounciness_index) 
        total_distance += distance
        height *= bounciness_index
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_of_bounces)

print(f"{total_distance:.4f}")