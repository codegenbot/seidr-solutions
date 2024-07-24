```
def check_dict_case(dict):
    if len(dict) == 0:
        return False
    for key in dict.keys():
        if (key.islower() and any(not k.islower() for k in dict.keys()) or 
            key.isupper() and any(not k.isupper() for k in dict.keys())):
            return False
    return True