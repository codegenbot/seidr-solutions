```
def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            sub_list = l[:i+1]
            if len(sub_list) > i//3*3 + i%3:
                sub_list = sub_list[i//3*3 + i%3:]
            sorted_sub_list = sorted(set(sub_list))
            result.append(sorted_sub_list[-1])
    return result