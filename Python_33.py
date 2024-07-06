```Python
def sort_third(l):
    result = []
    for i in range(0, len(l), 3):
        if i + 2 < len(l):
            result.append(sorted([l[i], l[i+1], l[i+2]]))
        elif i + 1 < len(l): 
            result.append(sorted([l[i], l[i+1]]))
        else:
            result.append([l[i]])
    return [item for sublist in result for item in sorted(sublist)]

input_list = [5, 6, 3, 4, 8, 9, 2, 1]
print(sort_third(input_list))