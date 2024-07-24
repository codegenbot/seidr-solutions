def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    current_height = start_height

    for _ in range(num_bounces):
        total_distance += 2 * current_height
        current_height *= 0.5 

    return round(bounciness_index,4), round(total_distance, 4)

bounciness_index, total_distance = bouncing_balls()
print("Bounciness Index: ", bounciness_index)
print("Total Distance: ", total_distance)