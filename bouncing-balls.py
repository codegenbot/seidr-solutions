def bouncing_balls():
    s_height = float(input())
    first_height = float(input())
    bounces = int(input())

    bounciness_index = first_height / s_height
    total_distance = (2**bounces - 1) * s_height * bounciness_index
    print("{:.6f}".format(total_distance))


bouncing_balls()