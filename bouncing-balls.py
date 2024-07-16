b = float(input())
a = float(input())
n = int(input())

index = a / b

distance = 0
for _ in range(n):
    distance += (2 * b) ** index
    b *= (1 - (a / b)) ** 2

print(distance)