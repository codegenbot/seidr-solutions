def odd_count(lst):
    return [
        "the number of odd elements {}n the str{}ng {} of the {}nput.".format(
            len(str(s).replace("0", "")), len(str(s)) for s in lst
        )
    ]