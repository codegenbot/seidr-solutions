```
start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the first bounce height: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = first_bounce_height / start_height

total_distance = 0
current_height = start_height
for _ in range(num_bounces):
    total_distance += 2 * current_height
    current_height *= bounciness_index
print(total_distance)