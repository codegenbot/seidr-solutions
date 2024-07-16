def bouncing_balls():
    height = float(input())
    first_height = float(input())
    bounciness_index = first_height / height
    num_bounces = int(input())

    total_distance = (
        (1 - math.pow(bounciness_index, -num_bounces)) * height / bounciness_index
    )

    print(round(total_distance, 4))


bouncing_balls()