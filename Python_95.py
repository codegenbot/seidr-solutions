def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = list(dict.keys())
    if keys[0].islower():
        for key in keys:
            if not key.islower():
                return False
    elif keys[0].isupper():
        for key in keys:
            if not key.isupper():
                return False
    else:
        return False
    return True