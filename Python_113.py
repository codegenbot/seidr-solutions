def odd_count(lst):
    return [f"the number of odd elements {sum(int(digit) % 2 != 0 for digit in s)}n the str{s.count(digit)}ng {s.count(digit)} of the {s.count(digit)}nput." for s in lst]