def check(func):
    def custom_logic(lst):
        new_lst = func(lst)
        return sum(new_lst)
    return custom_logic