```
def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(bounciness_index, num_of_bounces):
    height = starting_height
    total_distance = 0
    for _ in range(num_of_bounces + 1):  
        total_distance += abs(height)  
        if _ < num_of_bounces:  
            height *= 0.75  
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_of_bounces = int(input())

bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
total_distance = calculate_total_distance(bounciness_index, num_of_bounces)

print(f"{total_distance:.4f}")