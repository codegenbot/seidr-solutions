def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = dict.keys()
    if all(isinstance(key, str) and key.islower() for key in keys):
        return True
    if all(isinstance(key, str) and key.isupper() for key in keys):
        return True
    return False