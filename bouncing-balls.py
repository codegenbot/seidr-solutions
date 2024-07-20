h = float(input())
b = float(input())
n = int(input())

index = b / h

total_distance = 0.5 * (1 + index) ** n * h
print("{:.6f}".format(total_distance))