def check(func, args):
    try:
        result = func(*args)
        print(result)
    except Exception as e:
        print(f"An error occurred: {e}")