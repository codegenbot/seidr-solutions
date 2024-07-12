```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** 0.5

    total_distance = 0
    for i in range(num_bounces):
        distance = 2 * bounciness_index
        total_distance += distance
    print(total_distance)


bouncing_balls()