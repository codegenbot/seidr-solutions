def bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    bounces = int(input())

    bounciness_index = height_after_first_bounce / starting_height

    total_distance = 0
    for _ in range(bounces):
        total_distance += bounciness_index ** (_ + 1)

    print("{:.3f}".format(total_distance))