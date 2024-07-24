def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    
    num_bounces = int(input())
    total_distance = 0
    current_height = first_bounce_height

    for _ in range(num_bounces - 1):
        distance = 2 * abs(current_height - start_height)
        total_distance += distance + 2 * abs(start_height, current_height)  # include the distance of the first bounce
        bounciness_index /= 2  
        current_height /= 2

    return round(total_distance, 4)

print(bouncing_balls())