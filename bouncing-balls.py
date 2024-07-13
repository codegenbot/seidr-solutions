```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    max_height = start_height + first_bounce_height
    for i in range(num_bounces):
        new_height = start_height + (-1)**(i+1) * first_bounce_height
        total_distance += abs(new_height)
        max_height = abs(new_height)

    return str(bounciness_index) + "\n" + str(total_distance)

print(bouncing_balls())