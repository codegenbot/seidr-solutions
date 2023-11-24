def fuel_cost(arr):
    return sum([math.floor((x / 3)) - 2 for x in arr])


# read input
arr = []
for _ in range(2):
    arr.append(int(input()))

# calculate and print output
print(fuel_cost(arr))