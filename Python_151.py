def check(lst, result):
    if isinstance(result, int) and (result == 0 or lst[1] - lst[0] == result):
        print("Good job! Your function is working correctly.")
    else:
        print("There seems to be a mistake in your code.")