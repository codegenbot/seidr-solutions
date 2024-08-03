def check_dict_case(dict):
    if not dict:
        return False
    key_cases = set()
    for key in dict:
        key_cases.add(key.lower())
    return len(key_cases) == 1