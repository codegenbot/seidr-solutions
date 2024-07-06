def check_dict_case(dict):
    if not dict:
        return False
    case = set()
    for key in dict:
        case.add(key[:1].upper())
    return len(case) == 1