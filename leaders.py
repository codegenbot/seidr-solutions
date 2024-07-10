def leaders(integers):
    leaders_list = [integers[-1]]
    for i in range(len(integers) - 2, -1, -1):
        if integers[i] >= integers[-1]:
            leaders_list.append(integers[i])
            leaders_list[-1] = integers[i]
    return list(reversed(leaders_list))