def total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = starting_height

    for bounce_num in range(num_bounces):
        total_distance += 2 * first_bounce_height * (bounciness_index ** bounce_num)

    return total_distance

starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = total_distance(starting_height, first_bounce_height, num_bounces)
print(result)