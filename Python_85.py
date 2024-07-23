def add(lst):
    return sum(i for i in lst if i % 2 == 0 and lst.index(i) % 2 != 0)