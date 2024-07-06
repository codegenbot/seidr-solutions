def find_average(lst):
    average = sum(i for i in lst) / len(lst)
    return int(average) if average.is_integer() else float(average)