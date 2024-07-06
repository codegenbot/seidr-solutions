def sort_third(l):
    result = []
    for i, x in enumerate(l):
        if i % 3 != 0:
            result.append(x)
        else:
            min_element = min(l[max(0,i-2):i+1])
            result.append(min_element)
    return sorted(result)

input_list = [3, 1, 2, 5, 4]
print(sort_third(input_list))