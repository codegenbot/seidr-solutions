def check(func, lst):
    try:
        result = func(lst)
        print(f"Result: {result}")
    except Exception as e:
        print(f"Error: {str(e)}")

check(double_the_difference, [input("Enter space-separated integers: ").split()])