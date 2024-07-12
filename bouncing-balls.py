```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        new_height = (0.5) ** (i + 1) * start_height
        total_distance += abs(new_height)
        
    return str(bounciness_index) + "\n" + str(total_distance)

print(bouncing_balls())