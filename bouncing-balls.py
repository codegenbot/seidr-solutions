def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height + first_bounce_height

    for _ in range(num_bounces - 1):
        if _ % 2 == 0:
            first_bounce_height *= bounciness_index
            total_distance += first_bounce_height
        else:
            first_bounce_height /= bounciness_index
            total_distance += first_bounce_height

    return total_distance


starting_height = float(input("Enter starting height: "))
first_bounce_height = float(input("Enter height after first bounce: "))
num_bounces = int(input("Enter number of bounces: "))

result = calculate_total_distance(starting_height, first_bounce_height, num_bounces)
print(result)