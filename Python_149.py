def sorted_list(lst):
    return sorted(filter(lambda x: len(x) % 2 == 0, lst))

def check(func):
    print("Enter some strings:")
    lst = input().split()
    print(func(lst))

check(sorted_list)