def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces*2): 
        if i % 2 == 0:  
            new_height = (first_bounce_height - start_height) * (2**((i//2)-1)) + start_height
        else:  
            new_height = (start_height - first_bounce_height) * (2**(i//2)) + start_height

        total_distance += abs(new_height - start_height)
        first_bounce_height = new_height

    return str(bounciness_index) + "\n" + str(total_distance)

print(bouncing_balls())