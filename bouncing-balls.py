```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = (first_bounce_height / start_height) ** (1/(num_bounces + 1))

    total_distance = 2 * start_height * ((1 - bounciness_index**2) ** (num_bounces + 1)) / (bounciness_index**2)

    return str(round(total_distance, 4))


print(bouncing_balls())