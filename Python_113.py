def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(int(digit) % 2 != 0 for digit in string),
        sum(int(digit) % 2 != 0 for digit in str(index+1)),
        str(index+1),
        str(index+1)
    ) for index, string in enumerate(lst)]