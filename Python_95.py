
def check_dict_case(my_dict):
    if not my_dict:
        return False
    else:
        for key in my_dict.keys():
            if not isinstance(key, str) or (key.islower() and key.isupper()):
                return False
        return True