starting_height = float(input())
bounce_height = float(input())
num_bounces = int(input())

bounciness_index = bounce_height / starting_height
total_distance = starting_height + (
    2 * sum(bounciness_index**i for i in range(1, num_bounces))
)

print(total_distance)