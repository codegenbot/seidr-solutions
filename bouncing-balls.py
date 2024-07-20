```
def bouncing_ball(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for i in range(num_bounces):
        height = start_height * (bounciness_index ** (i + 1))
        total_distance += 2 * height
    return round(total_distance, 3)

start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

print(round(bouncing_ball(start_height, first_bounce_height, num_bounces), 3))