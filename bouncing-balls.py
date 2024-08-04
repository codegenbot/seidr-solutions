def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = (
        2 * math.sqrt(starting_height) + 2 * math.sqrt(first_bounce_height)
    ) ** num_bounces
    return total_distance


starting_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(bouncing_balls(starting_height, first_bounce_height, num_bounces))