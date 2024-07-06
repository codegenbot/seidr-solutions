```
first_bounce_height = float(input("Enter height after the first bounce: "))
start_height = float(input("Enter starting height: "))
bounciness_index = (first_bounce_height - start_height) / start_height

distance = 0
height = start_height
for _ in range(int(input("Enter number of bounces: "))):
    height *= 2 - bounciness_index
    distance += height

print(round(distance, 5))