```
def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input("Enter the number of bounces: "))

    total_distance = 0

    for _ in range(num_bounces):
        new_start_height = start_height * bounciness_index
        total_distance += new_start_height - start_height 
        total_distance += start_height - new_start_height 
        start_height = new_start_height 

    return round(total_distance, 4)


print(bouncing_balls())