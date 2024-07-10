def leaders(input):
    result = []
    for i in range(len(input) - 1, -1, -1):
        is_leader = True
        for j in range(i + 1, len(input)):
            if input[i] < input[j]:
                is_leader = False
                break
        if is_leader:
            result.append(input[i])
    return result[::-1]