def odd_count(lst):
    return [
        f"the number of odd elements {len([int(d) for d in s if int(d) % 2])}n the str{i+1}ng {i+1} of the input."
        for i, s in enumerate(lst)
    ]