def fuel_cost(numbers):
    return sum([math.floor(x/3) - 2 for x in numbers])

numbers = []
n = int(input())
for _ in range(n):
    numbers.append(int(input()))

result = fuel_cost(numbers)
print(result)