```
def double_the_difference(lst):
    if len(set(lst)) > 1:
        return (max(lst) - min(lst)) * 2
    else:
        return None

def check():
    while True:
        numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if len(set(numbers)) == 2:
            break
    print(double_the_difference(numbers))

check()