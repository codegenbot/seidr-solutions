```
def double_the_difference(lst):
    mean = sum(i for i in lst) / len(lst)
    return abs(sum(i**2 for i in lst) - 2*len(lst)*mean**2)

lst = list(map(int, input("Enter numbers separated by space: ").split()))
print(double_the_difference(lst))