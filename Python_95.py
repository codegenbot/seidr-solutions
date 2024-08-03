```
def check_dict_case(dict):
    if len(dict) == 0:
        return False
    for key in dict:
        if isinstance(key, str):
            if any(not k.islower() and not k.isupper() for k in dict):
                return False
    return True