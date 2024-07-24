def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = (
        2 * (1 + bounciness_index) ** (num_bounces + 1) - 2 * (1 + bounciness_index)
    ) / (bounciness_index - 1)
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

result = bouncing_balls(start_height, first_bounce_height, num_bounces)

print("{:.3f}".format(result))