def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(int(digit) % 2 != 0 for digit in string),
        sum(int(digit) % 2 != 0 for digit in string),
        sum(int(digit) % 2 != 0 for digit in string),
        sum(int(digit) % 2 != 0 for digit in string)
    ) for string in lst]