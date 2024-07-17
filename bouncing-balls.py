```
def bouncing_balls():
    s_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / s_height
    
    num_bounces = int(input())
    
    total_distance = 0
    current_height = first_bounce_height
    
    for _ in range(num_bounces):
        if current_height > 1e-6: # to avoid division by zero
            current_height *= bounciness_index
        total_distance += 2 * s_height + 2 * abs(s_height - current_height)
    
    return round(total_distance, 5)

print(round(bouncing_balls(), 5))