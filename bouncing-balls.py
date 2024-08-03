```
def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / s_height
    
    num_bounces = int(input())
    
    total_distance = 0
    current_height = first_bounce_height
    
    for _ in range(num_bounces):
        total_distance += 2 * (s_height + current_height)
        current_height *= bounciness_index

    return round(total_distance, 3)

print(bouncing_balls())