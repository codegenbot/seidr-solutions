```
def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        if i + 2 < len(l):
            result.append(sorted([l[i], l[i+1], l[i+2]]))
        else:
            if i + 1 < len(l):
                result.append([l[i]])
            elif i < len(l):
                result.append([l[i]])
    return [item for sublist in result for item in sublist]

input_list = [5, 6, 3, 4, 8, 9, 2, 1]
print(sort_third(input_list))