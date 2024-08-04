def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        len([digit for digit in string if int(digit) % 2 != 0]),
        len([digit for digit in string if int(digit) % 2 != 0]),
        idx + 1,
        idx + 1
    ) for idx, string in enumerate(lst)]