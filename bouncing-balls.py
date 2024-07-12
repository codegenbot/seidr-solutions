def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height
    for _ in range(num_bounces):
        total_distance += 2 * first_bounce_height
        first_bounce_height *= bounciness_index
    return total_distance

starting_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the height after the first bounce: "))
num_bounces = int(input("Enter the number of bounces: "))

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print("Total distance traveled across bounces:", result)