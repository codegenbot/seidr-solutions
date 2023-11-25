num_ints = int(input())
ints = []
for _ in range(num_ints):
    ints.append(int(input()))

result = sum([math.floor(num/3) - 2 for num in ints])
print(result)