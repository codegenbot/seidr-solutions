```
left_max = [0]*int(input())
right_max = [0]*int(input())
total_water = 0

column = [int(x) for x in input().split()]
for i in range(int(input())):
    left_max[i] = max(left_max[i], column[i])
    right_max[int(input())-i-1] = max(right_max[int(input())-i-1], column[int(input())-i-1])

for row in [[int(x) for x in input().split()] for _ in range(int(input()))]:
    for i in range(len(row)):
        water_height = min(left_max[i], right_max[i]) - row[i]
        if water_height > 0:
            total_water += water_height

print(total_water)