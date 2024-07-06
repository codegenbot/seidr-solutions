def check_dict_case(dict):
    if len(dict) == 0:
        return False
    key_set = set()
    for key in dict:
        key_set.add(key.upper())
    return all([key_set.count(key) == 1 for key in key_set])