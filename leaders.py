def find_leaders(inputVector):
    leaders = []
    maxRight = inputVector[-1]
    leaders.append(maxRight)
    for i in range(len(inputVector)-2, -1, -1):
        if inputVector[i] >= maxRight:
            leaders.append(inputVector[i])
            maxRight = inputVector[i]
    return leaders