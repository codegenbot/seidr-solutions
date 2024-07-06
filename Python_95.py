```
def check_dict_case(dict):
    if not dict:
        return False
    case = set()
    for key in dict:
        if key.islower():
            case.add('lower')
        elif key.isupper():
            case.add('upper')
        else:
            return False
    return len(case) == 1