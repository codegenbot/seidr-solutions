def transform_string(string):
    return "".join([char.upper() if char.islower() else char.lower() for char in string])