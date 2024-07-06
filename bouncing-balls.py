```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    distance = 0
    for _ in range(num_bounces):
        start_height *= (1 - bounciness_index) * 2  
        distance += start_height

    return round(distance, 5)

print(bouncing_balls())