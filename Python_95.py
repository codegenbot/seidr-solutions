def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = list(dict.keys())
    is_lower = all(key.islower() for key in keys if isinstance(key, str))
    is_upper = all(key.isupper() for key in keys if isinstance(key, str))
    return is_lower or is_upper