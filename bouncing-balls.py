```
start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the height after the first bounce: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = (first_bounce_height / start_height)

total_distance = 0
height = start_height
for _ in range(num_bounces): 
    total_distance += abs(height - start_height) * 2
    height *= bounciness_index

print("The total distance traveled is: ", round(total_distance, 2))