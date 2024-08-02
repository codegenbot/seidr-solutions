def check_dict_case(dict):
    if not dict:
        return False
    key_set = set(key.upper() for key in dict.keys())
    return len(key_set) == 1