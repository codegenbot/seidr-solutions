def bouncing_balls():
    height = float(input())
    first_height = float(input())
    bounces = int(input())

    bounciness_index = (first_height / height) if height != 0 else 0

    total_distance = 2 * (1 - (bounciness_index**2)) ** bounces
    return "{:.3f}".format(total_distance)


print(bouncing_balls())