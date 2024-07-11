```
def leaders(input_list):
    return [max(input_list[i:]) for i in range(len(input_list)-1, -1, -1)]