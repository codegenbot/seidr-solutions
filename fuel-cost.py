def fuel_cost(arr):
    return sum([int((x / 3) - 2) for x in arr])


n = int(input())

arr = []

for _ in range(n):
    arr.append(int(input()))

print(fuel_cost(arr))