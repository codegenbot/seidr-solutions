def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    distance = (bounces + 1) * 2 * start_height * math.sqrt(bounciness_index)

    return round(distance, 5)


print(bouncing_balls())