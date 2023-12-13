def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(int(digit) % 2 != 0 for digit in string),
        string.index(string) + 1,
        string,
        string.index(string) + 1
    ) for string in lst]