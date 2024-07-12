def check_dict_case(dict):
    if not dict:
        return False
    case = all(isinstance(key, str) for key in dict)
    return case and (
        all(key.islower() for key in dict) or all(key.isupper() for key in dict)
    )