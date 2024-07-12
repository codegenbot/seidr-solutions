def check(func, lst):
    try:
        result = func(lst)
        print(result)
    except Exception as e:
        print(f"An error occurred: {str(e)}")


check(double_the_difference, [input("Enter space-separated integers: ").split()])