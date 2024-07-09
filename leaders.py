input = list(map(int, input().split()))
leaders = [input[-1]]
for i in range(len(input)-1, -1, -1):
    if all(x <= input[i] for x in input[i+1:]):
        leaders.append(input[i])
print(leaders)