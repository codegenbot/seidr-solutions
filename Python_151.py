def check(func, *args):
    if func is None:
        return "None"
    elif not callable(func):
        return "Not a function"
    else:
        try:
            result = func(*args)
            return result
        except Exception as e:
            return str(e)