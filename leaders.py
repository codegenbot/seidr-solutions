```
def leaders(input):
    leader = input[0]
    result = [leader]
    for i in range(len(input)-2,-1,-1):
        if input[i] >= leader:
            leader = input[i]
            result.append(leader)
    return list(reversed(result))

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))