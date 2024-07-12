def add(x, y):
    try:
        if not isinstance(x, int) or not isinstance(y, int):
            return "Error: Please enter valid integers"
        return x + y
    except Exception as e:
        return str(e)