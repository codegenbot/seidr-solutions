def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(int(digit) % 2 != 0 for digit in string),
        sum(int(digit) % 2 != 0 for digit in string),
        i + 1,
        i + 1
    ) for i, string in enumerate(lst)]