
def check_dict_case(my_dict):
    if len(my_dict) == 0:
        return False
    else:
        for key in my_dict.keys():
            if key.islower() or key.isupper():
                continue
            else:
                return False
        return True