def odd_count(lst):
    return [
        "the number of odd elements {}n the str{}ng {} of the {}nput.".format(
            len(str(i).translate({c: "" for c in "0246"})), i, i, i
        )
        for i in lst
    ]