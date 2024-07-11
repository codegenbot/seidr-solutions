def check_dict_case(dict):
    if len(dict) == 0:
        return False
    for key in dict.keys():
        if isinstance(key, str):
            if key.islower() or key.isupper():
                pass
            else:
                return False
        else:
            return False
    return True