```
def check_dict_case(dict):
    if not dict:
        return False
    all_lower = all(isinstance(k, str) and k.islower() for k in dict)
    all_upper = all(isinstance(k, str) and k.isupper() for k in dict)
    return all_lower or all_upper