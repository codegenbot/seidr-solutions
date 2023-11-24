def fuel_cost(fuel_values):
    return sum([x // 3 - 2 for x in fuel_values])

arr = list(map(int, input().split()))

result = fuel_cost(arr)
print(result)