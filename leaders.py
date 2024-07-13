```
def leaders(input_list):
    if len(input_list) == 0:
        return []
    leaders = [input_list[-1]]
    for i in range(len(input_list)-2, -1, -1):
        if input_list[i] >= input_list[i+1]:
            leaders.insert(0, input_list[i])
    return leaders