```
def check_dict_case(dict):
    if not dict:
        return False
    case_type = set()
    for key in dict:
        if isinstance(key, str):
            if key.islower():
                case_type.add('lower')
            elif key.isupper():
                case_type.add('upper')
        else:
            return False
    return len(case_type) == 1