def odd_count(lst):
    return [
        "the number of odd elements {}n the str{}ng {} of the {}nput.".format(
            str(i).count("1"), i, i, i
        )
        for i in lst[0]
    ]