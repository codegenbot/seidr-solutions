starting_height = float(input())
first_bounce_height = float(input())
first_bounce_index = first_bounce_height / starting_height

num_bounces = int(input())

total_distance = 0
for i in range(num_bounces):
    total_distance += (2**i) * first_bounce_index

print(float(format(total_distance, ".4f")))