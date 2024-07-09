```
input = list(map(int, input().split()))
leaders = [input[-1]]
for i in range(len(input)-1, -1, -1):
    if input[i] >= max(input[i+1:]):
        leaders.append(input[i])
print(leaders)