```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (2*first_bounce_height) / (start_height + start_height)

    total_distance = (
        4 * start_height
        * (1 - bounciness_index**2)**(num_bounces/2)
    )

    return str(round(total_distance, 4))


print(bouncing_balls())