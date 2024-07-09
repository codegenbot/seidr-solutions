```
input = list(map(int, input().split()))
leaders = [input[0]]
max_right = input[-1]
for i in range(len(input)-2, -1, -1):
    if input[i] >= max_right:
        leaders.insert(0, input[i])
        max_right = input[i]
print(leaders)