```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    
    num_bounces = int(input())
    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces - 1):
        distance = 2 * abs(current_height - start_height)
        total_distance += distance + (abs(current_height - start_height) * 2)
        bounciness_index /= 2  
        current_height *= (bounciness_index ** 2)

    return round(total_distance, 4)

print(bouncing_balls())