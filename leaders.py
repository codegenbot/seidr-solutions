def leaders(input):
    result = []
    for i in range(len(input)-1,-1,-1):
        flag = True
        for j in range(i-1,-1,-1):
            if input[j] >= input[i]:
                flag = False
                break
        if flag:
            result.append(input[i])
    return list(reversed(result))