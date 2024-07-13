```Python
import math

start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the first bounce height: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = (1 - (first_bounce_height / start_height))
total_distance = start_height

for i in range(num_bounces):
    total_distance += total_distance * math.pow(2, -0.5) * math.pow(bounciness_index, i+1)

print(total_distance)