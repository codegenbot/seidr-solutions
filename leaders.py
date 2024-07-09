input = list(map(int, input().split()))
leaders = []
for i in range(len(input)-1, -1, -1):
    if i == len(input) - 1:  
        leaders.append(input[i])
    elif input[i] >= max(input[i+1:]):
        leaders.append(input[i])
print(leaders)