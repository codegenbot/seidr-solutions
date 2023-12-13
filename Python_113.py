def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(
        len([c for c in s if int(c) % 2 != 0]), 
        i, 
        i, 
        i) for i, s in enumerate(lst)]