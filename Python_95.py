def check_dict_case(d):
    if len(d) == 0:
        return False
    else:
        case = d.keys()[0].islower()
        for k in d.keys():
            if k.islower() != case:
                return False
        return True