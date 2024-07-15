```
start_height = float(input())
first_bounce_height = float(input())
num_bounces = int(input())

bounciness_index = first_bounce_height / start_height

total_distance = 0
current_height = start_height
for i in range(num_bounces):
    distance = bounciness_index * current_height * 2
    total_distance += distance
    if i < num_bounces - 1:  
        current_height *= 0.8
    
print(total_distance)