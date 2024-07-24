def leaders(input):
    input = list(map(int, input.split()))
    leaders_list = [input[-1]]

    last_leader = input[-1]
    for i in range(len(input) - 2, -1, -1):
        if input[i] >= last_leader:
            leaders_list.insert(0, input[i])
            last_leader = input[i]

    return " ".join(str(x) for x in leaders_list)