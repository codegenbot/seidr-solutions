
def check_dict_case(my_dict):
    if not my_dict:
        return False
    else:
        for key in my_dict.keys():
            if type(key) is str and (key.islower() or key.isupper()):
                pass
            else:
                return False
        return True