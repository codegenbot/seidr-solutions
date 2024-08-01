```
def check_dict_case(dict):
    if len(dict) == 0:
        return False
    all_upper = all(key.isupper() for key in dict)
    all_lower = all(key.islower() for key in dict)
    return all_upper or all_lower