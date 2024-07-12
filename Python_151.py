def check(func, lst):
    try:
        result = func(lst)
        print(f"The sum of the squares of all even numbers in {lst} is {result}.")
    except TypeError as e:
        print("Error: Only integers are allowed. Try again!")