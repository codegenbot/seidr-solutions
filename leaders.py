for i in range(len(input)-1):
    if input[i] >= max(input[i+1:]):
        leaders.append(input[i])
leaders.append(input[-1])
print(leaders)