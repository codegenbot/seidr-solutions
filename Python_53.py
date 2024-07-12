```
def add(x: int, y: int):
    try:
        if not isinstance(x, int) or not isinstance(y, int):
            return "Error: Please enter valid integers"
        return x + y
    except Exception as e:
        print("An unexpected error occurred: ", str(e))