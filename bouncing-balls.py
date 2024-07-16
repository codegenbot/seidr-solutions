def bouncing_balls():
    start_height = float(input())
    bounciness_index = (float(input()) / start_height)
    num_bounces = int(input())

    total_distance = 0
    for i in range(1, num_bounces + 1):
        bounce_height = start_height * (bounciness_index ** i)
        total_distance += 2 * bounce_height 
    print(total_distance)