def check_dict_case(dict):
    if not dict:
        return False
    key_cases = set()
    for key in dict:
        key_cases.add(key.islower())
    return len(set([key.islower() for key in dict])) == 1