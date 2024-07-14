def bouncing_balls(starting_height, height_after_first_bounce, num_bounces):
    bounciness_index = height_after_first_bounce / starting_height
    distance = (1 + bounciness_index) ** num_bounces - 1
    return round(distance, 5)


starting_height = float(input())
height_after_first_bounce = float(input())
num_bounces = int(input())

print(bouncing_balls(starting_height, height_after_first_bounce, num_bounces))