def check(func, *args):
    if func(1) == func(-1):
        print("Output will be the same")
    else:
        print("Output will not be the same")