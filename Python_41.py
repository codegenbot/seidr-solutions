def car_race_collision(n):
left_to_right = []
right_to_left = []
for i in range(1, n + 1):
if i % 2 == 0:
left_to_right.append(i)
else:
right_to_left.append(n - i)
collisions = 0
for car in left_to_right:
for other_car in right_to_left:
if abs(car - other_car) <= 1:
collisions += 1
return collisions