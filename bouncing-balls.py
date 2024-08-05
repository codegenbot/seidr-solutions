def total_distance(starting_height, height_after_bounce, num_bounces):
    bounciness_index = height_after_bounce / starting_height
    total_distance = (
        starting_height + starting_height * (1 + bounciness_index) ** num_bounces
    )
    return total_distance


starting_height = float(input())
height_after_bounce = float(input())
num_bounces = int(input())
result = total_distance(starting_height, height_after_bounce, num_bounces)
print(result)