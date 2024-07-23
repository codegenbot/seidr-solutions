def leaders(input):
    output = []
    for i in range(len(input) - 1, -1, -1):
        is_leader = True
        for j in range(i - 1, -1, -1):
            if input[i] < input[j]:
                is_leader = False
                break
        if is_leader:
            output.append(input[i])
    return output