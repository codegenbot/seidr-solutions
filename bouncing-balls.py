```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for i in range(num_bounces):
        if i == 0:
            distance = (1 + 2 * (bounciness_index**0.5))
        else:
            distance = (1 + 2 * ((start_height / first_bounce_height) ** 0.5)) ** (i+1)
        total_distance += start_height / (1 + bounciness_index) - start_height
    print(total_distance)

bouncing_balls()