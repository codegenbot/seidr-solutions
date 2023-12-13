def check_dict_case(dict):
    if len(dict) == 0:
        return False
    
    keys = list(dict.keys())
    first_key = keys[0]
    
    if all(key.islower() for key in keys):
        return True
    elif all(key.isupper() for key in keys):
        return True
    else:
        return False