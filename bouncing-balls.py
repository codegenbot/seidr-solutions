import math

start_height = float(input("Enter the starting height: "))
first_bounce_height = float(input("Enter the first bounce height: "))
num_bounces = int(input("Enter the number of bounces: "))

bounciness_index = first_bounce_height / start_height
total_distance = (
    start_height
    * math.pow(2, -0.5)
    * (1 - math.pow(bounciness_index, num_bounces + 1))
    / (1 - bounciness_index)
)

print(total_distance)