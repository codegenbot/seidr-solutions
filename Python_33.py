def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        if i + 2 < len(l):
            result.append(sorted([l[i], l[i+1], l[i+2]]))
        else:
            if len(l) == i + 1:
                result.append([l[i]])
            elif len(l) == i + 2:
                result.append(sorted([l[i], l[i+1]]))
    return [item for sublist in result for item in sublist]

input_list = [5, 6, 3, 4, 8, 9, 2, 1]
print(sort_third(input_list))