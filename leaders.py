def leaders(integers):
    leaders_list = []
    max_right = integers[-1]
    for integer in reversed(integers):
        if integer >= max_right:
            leaders_list.append(integer)
            max_right = integer
    return list(reversed(leaders_list))