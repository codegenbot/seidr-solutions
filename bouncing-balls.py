```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = round(first_bounce_height / start_height, 5)
    num_bounces = int(input())

    total_distance = 0
    height = start_height
    for i in range(num_bounces):
        distance = 2 * height 
        total_distance += distance
        if i < num_bounces - 1:
            height *= bounciness_index  
        else: 
            height /= (bounciness_index ** 0.5)
    return round(total_distance, 5)

print(bouncing_balls(55.311633103962826,13.502719512654656,18))