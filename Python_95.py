def check_dict_case(dict):
    if not dict:
        return False
    keys = [key for key in dict]
    return all(key.islower() for key in keys) or all(key.isupper() for key in keys)