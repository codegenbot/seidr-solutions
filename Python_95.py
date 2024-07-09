def check_dict_case(dict):
    if len(dict) == 0:
        return False
    case = all(isinstance(key, str) for key in dict.keys())
    if case:
        return all(key.islower() or key.isupper() for key in dict.keys())
    else:
        return any(not (key.islower() or key.isupper()) for key in dict.keys())