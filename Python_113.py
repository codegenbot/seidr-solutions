def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        sum(1 for char in string if int(char) % 2 != 0),
        sum(1 for char in string if int(char) % 2 != 0),
        sum(1 for char in string if int(char) % 2 != 0),
        sum(1 for char in string if int(char) % 2 != 0)
    ) for string in lst]