def sort_third(l: list):
    third_list = [
        i if i % 3 != 0 else next((x for x in l if x % 3 == 0), -1) for i in l
    ]
    return third_list