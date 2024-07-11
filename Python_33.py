```
def sort_third(l: list):
    result = []
    prev_value = None
    i = 0
    while i < len(l):
        if i % 3 != 0 or i >= len(l):
            result.append(l[i])
            prev_value = l[i]
        else:
            sublist = l[i:i+3]
            if len(sublist) == 3:
                sorted_sublist = sorted(sublist)
                result.append(sorted_sublist[-1])
                prev_value = sorted_sublist[-1]
            else:
                j = i
                while j < len(l):
                    if l[j] > prev_value:
                        result.append(l[j])
                        prev_value = l[j]
                        break
                    j += 1
        i += 1
    return result