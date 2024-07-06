def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        group = l[i:i+3]
        if len(group) == 1:
            result.append([group[0]])
        elif len(group) == 2:
            result.append(sorted(group))
        else:
            result.append(sorted(group))
    return [item for sublist in result for item in sublist]

input_list = [5, 6, 3, 4, 8, 9, 2, 1]
print(sort_third(input_list))