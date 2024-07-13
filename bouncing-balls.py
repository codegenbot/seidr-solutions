```
start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the height after the first bounce: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = first_bounce_height / start_height

total_distance = 0
height = start_height
for _ in range(num_bounces):
    up_distance = (start_height - height)
    down_distance = up_distance * 2
    total_distance += up_distance + down_distance
    height *= bounciness_index
    if height < 1:
        break

print("The total distance traveled is: ", round(total_distance, 2))