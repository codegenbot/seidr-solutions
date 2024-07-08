```
input = list(map(int, input().split()))
output = [input[-1]]
for i in reversed(input[:-1]):
    if i >= output[0]:
        output.insert(0, i)
print(output)