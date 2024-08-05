def odd_count(lst):
    return [f"the number of odd elements {sum(int(d) % 2 != 0 for d in s)}n the str{i}ng {i} of the {i}nput." for i, s in enumerate(lst, start=1)]