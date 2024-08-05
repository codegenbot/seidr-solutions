def check(func):
    def wrapper(*args, **kwargs):
        result = func(*args, **kwargs)
        if all(isinstance(x, int) for x in result):
            return result
        else:
            return "Error: List should only contain integers."
    return wrapper