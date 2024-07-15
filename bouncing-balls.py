```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    for i in range(num_bounces):
        if start_height > 0:
            total_distance += 2 * abs(start_height - start_height*(1-bounciness_index))
        new_height = start_height * (1 - bounciness_index)
        if new_height < 0.01:  
            break
        start_height = new_height

    print(total_distance)


bouncing_balls()