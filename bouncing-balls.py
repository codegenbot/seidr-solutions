def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    # Calculate bounciness index (height of first bounce / starting height)
    bounciness_index = first_bounce_height / start_height

    # Initialize total distance and height
    total_distance = 0
    height = first_bounce_height

    # Loop through each bounce
    for _ in range(bounces - 1):
        # Calculate the new height after this bounce
        height *= bounciness_index

        # Add the distance traveled to the total distance
        total_distance += 2 * height

    return round(total_distance, 5)


print(bouncing_balls())