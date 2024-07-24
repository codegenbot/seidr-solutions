```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = (first_bounce_height / start_height)
    
    num_bounces = int(input())
    total_distance = 0
    start_height = float(input())

    for _ in range(num_bounces):
        distance = 2 * abs(start_height - current_height)
        total_distance += distance
        start_height *= (1 - bounciness_index)  
        current_height = first_bounce_height * (0.5 ** (_ + 1))  

    return round(total_distance, 4)

print(bouncing_balls())