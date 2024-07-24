def odd_count(lst):
    result = []
    for i, s in enumerate(lst[0], start=1):
        count = sum(int(d) % 2 != 0 for d in s)
        result.append(
            f"the number of odd elements {count}n the str{i}ng {i} of the {i}nput."
        )
    return result