def leaders(input_list):
    n = len(input_list)
    leaders_list = [input_list[n - 1]]

    for i in range(n-2,-1,-1):
        if input_list[i] >= leaders_list[0]:
            leaders_list.insert(0, input_list[i])

    return leaders_list