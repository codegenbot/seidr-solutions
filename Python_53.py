def add(x: int, y: int):
    try:
        return x + y
    except Exception as e:
        print(f"Error occurred: {e}")
        return None