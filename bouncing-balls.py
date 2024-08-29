```
def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / starting_height
    
    num_bounces = int(input())
    
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 2 * abs(starting_height - height_after_first_bounce)
        height_after_first_bounce *= bounciness_index
        
    return round(total_distance, 4)

print(bouncing_balls())