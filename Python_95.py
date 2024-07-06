def check_dict_case(dict):
    if len(dict) == 0:
        return False
    case_type = set()
    for key in dict.keys():
        if isinstance(key, str):
            case_type.add(key.islower())
        else:
            return False
    return len(set([case_type.pop()])) == 1