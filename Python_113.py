```
def odd_count(lst):
    result = []
    for i, s in enumerate(lst):
        count = sum(1 for c in s if int(c) % 2 != 0)
        result.append(f"the number of odd elements {count}n the str{len(str(i))}ng {i} of the {len(str(i))}nput.")
    return result