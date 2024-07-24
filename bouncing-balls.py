```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    
    num_bounces = int(input())
    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces):
        distance = 2 * abs(start_height - current_height)
        total_distance += distance
        bounciness_index /= 2  
        current_height = (1 / 2) * (start_height + current_height)

    return round(total_distance, 4)

print(bouncing_balls())