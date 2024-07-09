def odd_count(lst):
    result = []
    for i, s in enumerate(lst[0]):
        count = sum(int(c) % 2 for c in str(s))
        result.append(f"the number of odd elements {count}n the str{i+1}ng {i+1} of the {len(lst)}nput."]
    return [result[0]]