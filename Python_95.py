def check_dict_case(dict):
    if not dict:
        return False
    case = set()
    for key in dict:
        if isinstance(key, str):
            case.add(key.islower())
        else:
            return False
    return len(set([case])) == 1