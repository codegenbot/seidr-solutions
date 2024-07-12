total_distance = 0
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

max_height = start_height + first_bounce_height
for i in range(num_bounces):
    new_height = 2 * max_height - start_height
    distance = abs(new_height - max_height)
    total_distance += distance
    max_height = new_height

return str(bounciness_index) + "\n" + str(total_distance)