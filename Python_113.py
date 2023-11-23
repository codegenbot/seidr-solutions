def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(int(digit) % 2 != 0 for digit in string), 
        string.index(digit) + 1, 
        string.index(digit) + 1, 
        string.index(digit) + 1
    ) for string in lst for digit in string]