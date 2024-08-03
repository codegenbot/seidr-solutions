```
def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = list(dict.keys())
    all_upper = all(key.isupper() for key in keys)
    all_lower = all(key.islower() for key in keys)
    return all_upper or all_lower