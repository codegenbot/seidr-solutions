```
def bouncing_balls():
    start_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter height after the first bounce: "))
    num_bounces = int(input("Enter number of bounces: "))

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    current_height = first_bounce_height

    for bounce_number in range(num_bounces):
        if bounce_number < num_bounces - 1:
            total_distance += 2 * current_height
        else:
            total_distance += 2 * current_height
        
        current_height = abs(current_height * 0.5)

    print(f"Total distance: {total_distance}")
    print(f"Bounciness index: {bounciness_index}")

bouncing_balls()