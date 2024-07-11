def sort_third(l: list):
    result = []
    for i, x in enumerate(l):
        if i % 3 == 0:
            segment_start = i
            sorted_segment = sorted([y for y in l[segment_start:i+1]])
            last_element = sorted_segment[-1] if len(sorted_segment) > 0 else None
        else:
            last_element = x if i != 0 and (i-1)%3 == 2 else None
        result.append(last_element)
    return result