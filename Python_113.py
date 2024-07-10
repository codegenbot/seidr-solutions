def odd_count(lst):
    result = []
    for i, s in enumerate(lst, start=1):
        count = sum(1 for d in s if int(d) % 2 != 0)
        result.append(
            f"the number of odd elements {count}n the str{i}ng {i} of the {len(lst)}nput."
        )
    return result