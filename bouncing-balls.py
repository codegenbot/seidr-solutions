def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    for _ in range(int(input())):
        total_distance += start_height * (1 + bounciness_index) ** (
            _ + 1
        ) - start_height * (1 + bounciness_index) ** (_ + 2)
    print(total_distance)


bouncing_balls()