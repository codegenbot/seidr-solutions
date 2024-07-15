```
def check_dict_case(dict):
    if len(dict) == 0:
        return False
    key_type = type(next(iter(dict)).lower())
    for key in dict:
        if type(key.lower()) != key_type:
            return False
    return True