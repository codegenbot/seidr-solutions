def fuel_cost(v):
    return sum((x // 3) - 2 for x in v)


v = []
for _ in range(int(input())):
    v.append(int(input()))

result = fuel_cost(v)
print(result)