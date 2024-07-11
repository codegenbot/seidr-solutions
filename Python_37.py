```
def sort_even(l):
    return sorted([x for x in l if x % 2 == 0])

def task_description():
    l = list(map(int, input().split()))
    print(sort_even(l))