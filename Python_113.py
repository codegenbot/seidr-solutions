def odd_count(lst):
    return ["the number of odd elements {}n the str{}ng {} of the {}nput.".format(sum(int(d) % 2 != 0 for d in s), i, i, i) for i, s in enumerate(lst, start=1)]