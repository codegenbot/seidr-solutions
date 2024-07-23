starting_height = float(input())
first_bounce_height = float(input())
first_bounce_index = first_bounce_height / starting_height

num_bounces = int(input())

distance = 0
for _ in range(num_bounces):
    distance += (1 + first_bounce_index) ** (_ + 1)

print("{:.6f}".format(distance))