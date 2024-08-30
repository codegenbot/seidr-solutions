def leaders(input):
    leaders_list = [input[-1]]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= input[i + 1]:
            leaders_list.insert(0, input[i])
    return leaders_list