def bouncing_balls(start_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / start_height
    total_distance = 0
    height = first_bounce_height
    for _ in range(num_bounces - 1):
        height *= bounciness_index * 2
        total_distance += height
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

output = bouncing_balls(start_height, first_bounce_height, num_bounces)

print(f"{output:.6f}")