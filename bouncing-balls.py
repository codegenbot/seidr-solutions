```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    
    num_bounces = int(input())
    
    total_distance = (1 + 2**0.5)**num_bounces * bounciness_index
    return str(format(total_distance, '.4f'))

print(bouncing_balls())