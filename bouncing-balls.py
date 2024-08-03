def bouncing_ball(height_after_first_bounce, starting_height, num_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    total_distance = (1 + bounciness_index) ** num_bounces - 1
    return round(total_distance, 5)


height_after_first_bounce = float(input())
starting_height = float(input())
num_bounces = int(input())

print(bouncing_ball(height_after_first_bounce, starting_height, num_bounces))