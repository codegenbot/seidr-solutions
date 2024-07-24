def leaders(input):
    input = list(map(int, input.split()))
    leader = input[-1]
    leaders_list = [leader]

    for i in range(len(input) - 2, -1, -1):
        if input[i] >= leader:
            leader = input[i]
            leaders_list.insert(0, leader)

    return " ".join(str(x) for x in leaders_list)