def check_dict_case(dict):
    if not dict:
        return False
    keys = list(dict.keys())
    all_lower = all(isinstance(k, str) and k.islower() for k in keys)
    all_upper = all(isinstance(k, str) and k.isupper() for k in keys)
    return all_lower or all_upper