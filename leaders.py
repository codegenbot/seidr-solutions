```
def leaders(integers):
    leaders_list = [integers[-1]]
    for i in range(len(integers) - 2, -1, -1):
        if integers[i] >= integers[i+1]:
            leaders_list.insert(0, integers[i])
    return leaders_list