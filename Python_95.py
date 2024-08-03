def check_dict_case(dict):
    if len(dict) == 0:
        return False
    keys = [key.upper() for key in dict.keys()]
    all_upper = set(keys) == set(
        [key[0].upper() + key[1:].lower() for key in dict.keys()]
    )
    all_lower = set(keys) == set([key.lower() for key in dict.keys()])
    return all_upper or all_lower