```
def leaders(input_list):
    n = len(input_list)
    leaders_list = [input_list[n - 1]]

    for i in range(n - 2, -1, -1):
        if input_list[i] >= min(input_list[i + 1:]):
            leaders_list.insert(0, input_list[i])

    return leaders_list