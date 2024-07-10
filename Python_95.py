```
def check_dict_case(dict):
    if not dict:
        return False
    keys = list(dict.keys())
    all_lower = all(key.islower() for key in keys)
    all_upper = all(key.isupper() for key in keys)
    return all_lower or all_upper