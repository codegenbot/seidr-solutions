```
def sort_even(lst):
    return sorted([x for x in lst if x % 2 == 0])

def task_description():
    l = list(map(int, input().split()))
    print(sort_even(l))