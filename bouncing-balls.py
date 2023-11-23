starting_height = float(input()) 
first_bounce_height = float(input()) 
num_bounces = int(input()) 

bounciness_index = first_bounce_height / starting_height 
total_distance = starting_height 

bounce_height = first_bounce_height 

for i in range(1, num_bounces): 
    bounce_height *= bounciness_index 
    total_distance += bounce_height * 2 

print(total_distance)