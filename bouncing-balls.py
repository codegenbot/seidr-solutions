```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0

    for i in range(num_bounces):
        if start_height > 0:
            distance = 2 * (start_height)  # Calculate the bounce distance
            total_distance += distance
        start_height *= bounciness_index  # Update the starting height for next bounce

    print(total_distance)