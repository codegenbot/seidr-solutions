def check(func, lst):
    try:
        result = func(lst)
        print(result)
    except Exception as e:
        print(f"Error: {str(e)}")