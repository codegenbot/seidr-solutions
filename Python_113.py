def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(1 for digit in s if int(digit) % 2 != 0),
        sum(1 for digit in s if int(digit) % 2 != 0),
        sum(1 for digit in s if int(digit) % 2 != 0),
        sum(1 for digit in s if int(digit) % 2 != 0)
    ) for s in lst]