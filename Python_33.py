def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 == 0:
            if i // 3 * 3 < len(l):
                sorted_segment = sorted([y for y in l[i//3*3:i+1]])
                last_element = sorted_segment[-1]
            else:
                last_element = None
        else:
            last_element = x
        result.append(last_element)
    return result