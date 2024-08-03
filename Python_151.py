def check(lst, result):
    if isinstance(result, int) and (result == 0 or lst[1] - lst[0] == 2 * result):
        print("Good")
    else:
        print("Bad")