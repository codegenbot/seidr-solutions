def odd_count(lst):
    return [
        "the number of odd elements {}n the str{}ng {} of the {}nput.".format(
            i + 1, i + 1, i + 1, i + 1
        )
        for i in range(len(lst[0]))
        if int(lst[0][i]) % 2 != 0
    ]