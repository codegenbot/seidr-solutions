def check(func): 
    try: 
        func() 
    except ValueError as e: 
        print(f"Error: {e}")