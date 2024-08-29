def bouncing_balls():
    starting_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / starting_height

    total_distance = (
        (2**0.5)
        * starting_height
        * ((1 + bounciness_index) ** bounces - 1)
        / (bounciness_index)
    )

    return str(round(total_distance, 4))


print(bouncing_balls())