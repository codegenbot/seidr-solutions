def check_dict_case(dict):
    if len(dict) == 0:
        return False
    lower_case_keys = all(key.islower() for key in dict.keys())
    upper_case_keys = all(key.isupper() for key in dict.keys())
    return lower_case_keys or upper_case_keys