start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

total_distance = 0
current_height = start_height
distance = start_height * 2
for i in range(num_bounces):
    total_distance += distance
    current_height *= bounciness_index
    distance = current_height * 2
    
print(total_distance)