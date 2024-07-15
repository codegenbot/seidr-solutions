```
def check_dict_case(dict):
    if not dict:
        return False
    key_cases = set([key[:].lower() for key in dict])
    return len(key_cases) <= 1