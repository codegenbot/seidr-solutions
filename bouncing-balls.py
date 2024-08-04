def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (1 + bounciness_index) ** num_bounces - 1
    return round(total_distance, 3)


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(bouncing_ball(start_height, first_bounce_height, num_bounces))