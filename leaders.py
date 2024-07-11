```
def leaders(input):
    leaders_list = []
    max_rightnow = input[-1]
    for i in range(len(input)-1,-1,-1):
        if input[i] >= max_rightnow:
            leaders_list.append(str(input[i]))
            max_rightnow = input[i]
    return list(reversed(leaders_list))

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))