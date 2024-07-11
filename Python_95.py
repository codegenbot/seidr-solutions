```
def check_dict_case(dict):
    if not dict:
        return False
    if all(isinstance(key, str) and key.islower() for key in dict):
        return True
    if all(isinstance(key, str) and key.isupper() for key in dict):
        return True
    return False