def check(transform_string):
    return "".join([char.lower() if char.isupper() else char.upper() for char in transform_string])