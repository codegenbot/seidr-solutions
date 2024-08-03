```
def check_dict_case(dict):
    if not dict:
        return False
    for key in dict.keys():
        if (not isinstance(key, str)) or ((key.islower() and any(not k.islower() for k in dict)) or (key.isupper() and any(not k.isupper() for k in dict))):
            return False
    return True