def bouncing_balls(start_height, first_height, num_bounces):
    bounciness_index = first_height / start_height
    total_distance = (
        (2**0.5) * ((1 - bounciness_index**2) ** num_bounces) * start_height
    )
    return format(total_distance, ".4f")


start_height = float(input())
first_height = float(input())
num_bounces = int(input())

print(bouncing_balls(start_height, first_height, num_bounces))