def check_dict_case(dict):
    if len(dict) == 0:
        return False
    case = [key.islower() for key in dict.keys()]
    return all(case) or any(case)