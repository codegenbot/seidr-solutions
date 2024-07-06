def check_dict_case(dict):
    if not dict:
        return False
    case = all(isinstance(key, str) and key.islower() for key in dict)
    return case or all(isinstance(key, str) and key.isupper() for key in dict)