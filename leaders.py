```
input = list(map(int, input().split()))
leaders = [input[-1]]
for i in range(len(input)-1, -1, -1):
    while i > 0 and input[i-1] < input[i]:
        i -= 1
    leaders.append(input[i])
print(leaders)