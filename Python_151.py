def check(func, args):
    try:
        result = func(*args)
        print(result)
    except Exception as e:
        print(f"Error: {e}")