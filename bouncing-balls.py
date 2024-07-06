```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = sum((2**((i+1)/2))*start_height*(((1-bounciness_index)**(i+1)))*bounciness_index**i for i in range(num_bounces))

    print(round(total_distance, 4))


bouncing_balls()