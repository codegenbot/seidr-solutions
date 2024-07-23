def check_dict_case(dict):
    if not dict:
        return False
    key_types = set(type(key) for key in dict)
    return (
        len(key_types) == 1
        and (key_types.pop() == str and all(key.islower() for key in dict))
        or key_types.pop() == str
        and all(key.isupper() for key in dict)
    )