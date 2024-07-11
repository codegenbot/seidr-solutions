def bouncing_balls(starting_height, bounce_height, num_bounces):
    bounciness_index = bounce_height / starting_height
    total_distance = starting_height + (num_bounces * (starting_height + bounce_height))
    return total_distance


starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

result = bouncing_balls(starting_height, bounce_height, num_bounces)
print(result)