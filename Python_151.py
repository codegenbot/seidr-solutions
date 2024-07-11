```
def double_the_difference(lst):
    if len(lst) < 2:
        return None
    lst.sort()
    return (lst[-1] - lst[0]) * 2

input_list = list(map(int, input("Enter elements separated by space: ").split()))
print(double_the_difference(input_list))