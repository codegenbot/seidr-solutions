return [
    f"the number of odd elements {sum(int(digit) % 2 != 0 for digit in string)}n the str{i}ng {i} of the {i}nput."
    for i, string in enumerate(lst, start=1)
]