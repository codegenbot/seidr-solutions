def odd_count(lst):
    result = []
    for i, s in enumerate(lst[0]):
        count = sum(int(d) % 2 for d in str(s))
        result.append(
            f"the number of odd elements {count}n the str{i+1}ng {i+1} of the {len(lst)}nput."
        )
    return [result[0]]