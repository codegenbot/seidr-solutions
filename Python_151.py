def check(func, lst):
    try:
        result = func(lst)
        print(f"Result: {result}")
    except Exception as e:
        print("Error:", str(e))