```
def sort_third(l):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            min_element = min(l[i-2:i+1])
            result.append(min_element)
    return sorted(result)

input_list = [5, 6, 3, 4, 8, 9, 2, 1]
print(sort_third(input_list))