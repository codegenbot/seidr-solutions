def leaders(input):
    input = list(map(int, input.split()))
    leaders = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= input[i + 1]:
            leaders.insert(0, input[i])
    return leaders